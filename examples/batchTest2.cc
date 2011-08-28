#include <string.h>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <set>
#include <string>
#include <stdio.h>

#include <libcassandra/cassandra_factory.h>
#include <libcassandra/cassandra.h>
#include <libcassandra/column_family_definition.h>
#include <libcassandra/keyspace.h>
#include <libcassandra/keyspace_definition.h>
#include <libgenthrift/Cassandra.h>
#include "libcassandra/util_functions.h"

using namespace std;
using namespace libcassandra;
using namespace org::apache::cassandra;

static string host("localhost");
static int port= 9160;

int main()
{
  CassandraFactory factory(host, port);
  boost::shared_ptr<Cassandra> client(factory.create());
    
  typedef std::tr1::unordered_map<string, string> ReadSet;   
  string key = "key_1";
    
  try {
    client->setKeyspace("sirikata");
        
    vector<Column> Columns;
    vector<string> Names;

    Column C1;
    C1.name  = "a";
    C1.value = "abcd!";
    C1.timestamp = createTimestamp();
        
    Column C2;
    C2.name  = "e";
    C2.value = "efgh!";
    C2.timestamp = createTimestamp();
        
    Column C3;
    C3.name  = "i";
    C3.value = "ijkl!";
    C3.timestamp = createTimestamp();
        
    Columns.push_back(C1);
    Columns.push_back(C2);
    Columns.push_back(C3);
        
    batchSuperColumnTuple tuple = batchSuperColumnTuple("persistence", key, "@", Columns, Names);        
    client->batchMutate(tuple);
    Columns.clear();

    Names.push_back("e");
    Names.push_back("i");
    cout<<"-------------"<<endl;   
    ReadSet rs = client->getColumnsValues(key, "persistence", "@", Names);
    cout<<"e: "<<rs["e"]<<endl;
    cout<<"i: "<<rs["i"]<<endl;

    Column C4;
    C4.name  = "m";
    C4.value = "mnop%";
    C4.timestamp = createTimestamp();
         
    Column C5;
    C5.name  = "q";
    C5.value = "qrst%";
    C5.timestamp = createTimestamp();
        
    Columns.push_back(C4);
    Columns.push_back(C5);
        
    tuple = batchSuperColumnTuple("persistence", key, "@", Columns, Names);
    client->batchMutate(tuple);           
        
    Names.clear();
    Names.push_back("a");
    Names.push_back("m");
    Names.push_back("q");
        
    cout<<"-------------"<<endl;   
    rs  = client->getColumnsValues(key, "persistence", "@", Names);
    cout<<"a: "<<rs["a"]<<endl;
    cout<<"m: "<<rs["m"]<<endl;
    cout<<"q: "<<rs["q"]<<endl;

    cout<<"-------------"<<endl;   
    string ret=client->getColumnValue(key, "persistence","@","e");
        
  }
  catch (org::apache::cassandra::NotFoundException &ire) {
    cout <<"NotFoundException Caught" << endl;
    return 1;
  }
  catch (org::apache::cassandra::InvalidRequestException &ire) {
    cout << "InvalidRequestException Caught: "<< ire.why << endl;
    return 1;
  }
    
  return 0;
}
