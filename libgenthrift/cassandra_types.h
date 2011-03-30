/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef cassandra_TYPES_H
#define cassandra_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>



namespace org { namespace apache { namespace cassandra {

struct ConsistencyLevel {
  enum type {
    ONE = 1,
    QUORUM = 2,
    LOCAL_QUORUM = 3,
    EACH_QUORUM = 4,
    ALL = 5,
    ANY = 6,
    TWO = 7,
    THREE = 8
  };
};

extern const std::map<int, const char*> _ConsistencyLevel_VALUES_TO_NAMES;

struct IndexOperator {
  enum type {
    EQ = 0,
    GTE = 1,
    GT = 2,
    LTE = 3,
    LT = 4
  };
};

extern const std::map<int, const char*> _IndexOperator_VALUES_TO_NAMES;

struct IndexType {
  enum type {
    KEYS = 0
  };
};

extern const std::map<int, const char*> _IndexType_VALUES_TO_NAMES;

typedef struct _Column__isset {
  _Column__isset() : ttl(false) {}
  bool ttl;
} _Column__isset;

class Column {
 public:

  static const char* ascii_fingerprint; // = "AFF5A2690BB9979816507B2F6BD21062";
  static const uint8_t binary_fingerprint[16]; // = {0xAF,0xF5,0xA2,0x69,0x0B,0xB9,0x97,0x98,0x16,0x50,0x7B,0x2F,0x6B,0xD2,0x10,0x62};

  Column() : name(""), value(""), timestamp(0), ttl(0) {
  }

  virtual ~Column() throw() {}

  std::string name;
  std::string value;
  int64_t timestamp;
  int32_t ttl;

  _Column__isset __isset;

  bool operator == (const Column & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(value == rhs.value))
      return false;
    if (!(timestamp == rhs.timestamp))
      return false;
    if (__isset.ttl != rhs.__isset.ttl)
      return false;
    else if (__isset.ttl && !(ttl == rhs.ttl))
      return false;
    return true;
  }
  bool operator != (const Column &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Column & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SuperColumn {
 public:

  static const char* ascii_fingerprint; // = "33B3E5A6E294B6FCDB3F6EB567D3DB04";
  static const uint8_t binary_fingerprint[16]; // = {0x33,0xB3,0xE5,0xA6,0xE2,0x94,0xB6,0xFC,0xDB,0x3F,0x6E,0xB5,0x67,0xD3,0xDB,0x04};

  SuperColumn() : name("") {
  }

  virtual ~SuperColumn() throw() {}

  std::string name;
  std::vector<Column>  columns;

  bool operator == (const SuperColumn & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(columns == rhs.columns))
      return false;
    return true;
  }
  bool operator != (const SuperColumn &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SuperColumn & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ColumnOrSuperColumn__isset {
  _ColumnOrSuperColumn__isset() : column(false), super_column(false) {}
  bool column;
  bool super_column;
} _ColumnOrSuperColumn__isset;

class ColumnOrSuperColumn {
 public:

  static const char* ascii_fingerprint; // = "C3B825B665DD0C548851BCD1D6D0D72E";
  static const uint8_t binary_fingerprint[16]; // = {0xC3,0xB8,0x25,0xB6,0x65,0xDD,0x0C,0x54,0x88,0x51,0xBC,0xD1,0xD6,0xD0,0xD7,0x2E};

  ColumnOrSuperColumn() {
  }

  virtual ~ColumnOrSuperColumn() throw() {}

  Column column;
  SuperColumn super_column;

  _ColumnOrSuperColumn__isset __isset;

  bool operator == (const ColumnOrSuperColumn & rhs) const
  {
    if (__isset.column != rhs.__isset.column)
      return false;
    else if (__isset.column && !(column == rhs.column))
      return false;
    if (__isset.super_column != rhs.__isset.super_column)
      return false;
    else if (__isset.super_column && !(super_column == rhs.super_column))
      return false;
    return true;
  }
  bool operator != (const ColumnOrSuperColumn &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnOrSuperColumn & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class NotFoundException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  NotFoundException() {
  }

  virtual ~NotFoundException() throw() {}


  bool operator == (const NotFoundException & /* rhs */) const
  {
    return true;
  }
  bool operator != (const NotFoundException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotFoundException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class InvalidRequestException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  InvalidRequestException() : why("") {
  }

  virtual ~InvalidRequestException() throw() {}

  std::string why;

  bool operator == (const InvalidRequestException & rhs) const
  {
    if (!(why == rhs.why))
      return false;
    return true;
  }
  bool operator != (const InvalidRequestException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidRequestException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UnavailableException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  UnavailableException() {
  }

  virtual ~UnavailableException() throw() {}


  bool operator == (const UnavailableException & /* rhs */) const
  {
    return true;
  }
  bool operator != (const UnavailableException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnavailableException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TimedOutException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  TimedOutException() {
  }

  virtual ~TimedOutException() throw() {}


  bool operator == (const TimedOutException & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TimedOutException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TimedOutException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AuthenticationException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  AuthenticationException() : why("") {
  }

  virtual ~AuthenticationException() throw() {}

  std::string why;

  bool operator == (const AuthenticationException & rhs) const
  {
    if (!(why == rhs.why))
      return false;
    return true;
  }
  bool operator != (const AuthenticationException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AuthorizationException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  AuthorizationException() : why("") {
  }

  virtual ~AuthorizationException() throw() {}

  std::string why;

  bool operator == (const AuthorizationException & rhs) const
  {
    if (!(why == rhs.why))
      return false;
    return true;
  }
  bool operator != (const AuthorizationException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthorizationException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ColumnParent__isset {
  _ColumnParent__isset() : super_column(false) {}
  bool super_column;
} _ColumnParent__isset;

class ColumnParent {
 public:

  static const char* ascii_fingerprint; // = "0A13AE61181713A4100DFFB3EC293822";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0x13,0xAE,0x61,0x18,0x17,0x13,0xA4,0x10,0x0D,0xFF,0xB3,0xEC,0x29,0x38,0x22};

  ColumnParent() : column_family(""), super_column("") {
  }

  virtual ~ColumnParent() throw() {}

  std::string column_family;
  std::string super_column;

  _ColumnParent__isset __isset;

  bool operator == (const ColumnParent & rhs) const
  {
    if (!(column_family == rhs.column_family))
      return false;
    if (__isset.super_column != rhs.__isset.super_column)
      return false;
    else if (__isset.super_column && !(super_column == rhs.super_column))
      return false;
    return true;
  }
  bool operator != (const ColumnParent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnParent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ColumnPath__isset {
  _ColumnPath__isset() : super_column(false), column(false) {}
  bool super_column;
  bool column;
} _ColumnPath__isset;

class ColumnPath {
 public:

  static const char* ascii_fingerprint; // = "606212895BCF63C757913CF35AEB3462";
  static const uint8_t binary_fingerprint[16]; // = {0x60,0x62,0x12,0x89,0x5B,0xCF,0x63,0xC7,0x57,0x91,0x3C,0xF3,0x5A,0xEB,0x34,0x62};

  ColumnPath() : column_family(""), super_column(""), column("") {
  }

  virtual ~ColumnPath() throw() {}

  std::string column_family;
  std::string super_column;
  std::string column;

  _ColumnPath__isset __isset;

  bool operator == (const ColumnPath & rhs) const
  {
    if (!(column_family == rhs.column_family))
      return false;
    if (__isset.super_column != rhs.__isset.super_column)
      return false;
    else if (__isset.super_column && !(super_column == rhs.super_column))
      return false;
    if (__isset.column != rhs.__isset.column)
      return false;
    else if (__isset.column && !(column == rhs.column))
      return false;
    return true;
  }
  bool operator != (const ColumnPath &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnPath & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SliceRange {
 public:

  static const char* ascii_fingerprint; // = "184D24C9A0B8D4415E234DB649CAE740";
  static const uint8_t binary_fingerprint[16]; // = {0x18,0x4D,0x24,0xC9,0xA0,0xB8,0xD4,0x41,0x5E,0x23,0x4D,0xB6,0x49,0xCA,0xE7,0x40};

  SliceRange() : start(""), finish(""), reversed(false), count(100) {
  }

  virtual ~SliceRange() throw() {}

  std::string start;
  std::string finish;
  bool reversed;
  int32_t count;

  bool operator == (const SliceRange & rhs) const
  {
    if (!(start == rhs.start))
      return false;
    if (!(finish == rhs.finish))
      return false;
    if (!(reversed == rhs.reversed))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const SliceRange &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SliceRange & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SlicePredicate__isset {
  _SlicePredicate__isset() : column_names(false), slice_range(false) {}
  bool column_names;
  bool slice_range;
} _SlicePredicate__isset;

class SlicePredicate {
 public:

  static const char* ascii_fingerprint; // = "F59D1D81C17DFFAF09988BF1C9CE5E27";
  static const uint8_t binary_fingerprint[16]; // = {0xF5,0x9D,0x1D,0x81,0xC1,0x7D,0xFF,0xAF,0x09,0x98,0x8B,0xF1,0xC9,0xCE,0x5E,0x27};

  SlicePredicate() {
  }

  virtual ~SlicePredicate() throw() {}

  std::vector<std::string>  column_names;
  SliceRange slice_range;

  _SlicePredicate__isset __isset;

  bool operator == (const SlicePredicate & rhs) const
  {
    if (__isset.column_names != rhs.__isset.column_names)
      return false;
    else if (__isset.column_names && !(column_names == rhs.column_names))
      return false;
    if (__isset.slice_range != rhs.__isset.slice_range)
      return false;
    else if (__isset.slice_range && !(slice_range == rhs.slice_range))
      return false;
    return true;
  }
  bool operator != (const SlicePredicate &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SlicePredicate & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class IndexExpression {
 public:

  static const char* ascii_fingerprint; // = "D9F4CFE2F293A8B1052FD3031DD2C847";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xF4,0xCF,0xE2,0xF2,0x93,0xA8,0xB1,0x05,0x2F,0xD3,0x03,0x1D,0xD2,0xC8,0x47};

  IndexExpression() : column_name(""), value("") {
  }

  virtual ~IndexExpression() throw() {}

  std::string column_name;
  IndexOperator::type op;
  std::string value;

  bool operator == (const IndexExpression & rhs) const
  {
    if (!(column_name == rhs.column_name))
      return false;
    if (!(op == rhs.op))
      return false;
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const IndexExpression &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IndexExpression & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class IndexClause {
 public:

  static const char* ascii_fingerprint; // = "9B551B9AB86120B0EEA9005C77FD3C1F";
  static const uint8_t binary_fingerprint[16]; // = {0x9B,0x55,0x1B,0x9A,0xB8,0x61,0x20,0xB0,0xEE,0xA9,0x00,0x5C,0x77,0xFD,0x3C,0x1F};

  IndexClause() : start_key(""), count(100) {
  }

  virtual ~IndexClause() throw() {}

  std::vector<IndexExpression>  expressions;
  std::string start_key;
  int32_t count;

  bool operator == (const IndexClause & rhs) const
  {
    if (!(expressions == rhs.expressions))
      return false;
    if (!(start_key == rhs.start_key))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const IndexClause &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IndexClause & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _KeyRange__isset {
  _KeyRange__isset() : start_key(false), end_key(false), start_token(false), end_token(false) {}
  bool start_key;
  bool end_key;
  bool start_token;
  bool end_token;
} _KeyRange__isset;

class KeyRange {
 public:

  static const char* ascii_fingerprint; // = "8F248C09AF1EC3656ABD8565EA1F59C1";
  static const uint8_t binary_fingerprint[16]; // = {0x8F,0x24,0x8C,0x09,0xAF,0x1E,0xC3,0x65,0x6A,0xBD,0x85,0x65,0xEA,0x1F,0x59,0xC1};

  KeyRange() : start_key(""), end_key(""), start_token(""), end_token(""), count(100) {
  }

  virtual ~KeyRange() throw() {}

  std::string start_key;
  std::string end_key;
  std::string start_token;
  std::string end_token;
  int32_t count;

  _KeyRange__isset __isset;

  bool operator == (const KeyRange & rhs) const
  {
    if (__isset.start_key != rhs.__isset.start_key)
      return false;
    else if (__isset.start_key && !(start_key == rhs.start_key))
      return false;
    if (__isset.end_key != rhs.__isset.end_key)
      return false;
    else if (__isset.end_key && !(end_key == rhs.end_key))
      return false;
    if (__isset.start_token != rhs.__isset.start_token)
      return false;
    else if (__isset.start_token && !(start_token == rhs.start_token))
      return false;
    if (__isset.end_token != rhs.__isset.end_token)
      return false;
    else if (__isset.end_token && !(end_token == rhs.end_token))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const KeyRange &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KeyRange & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class KeySlice {
 public:

  static const char* ascii_fingerprint; // = "23AD778D2AF7838AF7670990033673A1";
  static const uint8_t binary_fingerprint[16]; // = {0x23,0xAD,0x77,0x8D,0x2A,0xF7,0x83,0x8A,0xF7,0x67,0x09,0x90,0x03,0x36,0x73,0xA1};

  KeySlice() : key("") {
  }

  virtual ~KeySlice() throw() {}

  std::string key;
  std::vector<ColumnOrSuperColumn>  columns;

  bool operator == (const KeySlice & rhs) const
  {
    if (!(key == rhs.key))
      return false;
    if (!(columns == rhs.columns))
      return false;
    return true;
  }
  bool operator != (const KeySlice &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KeySlice & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class KeyCount {
 public:

  static const char* ascii_fingerprint; // = "EEBC915CE44901401D881E6091423036";
  static const uint8_t binary_fingerprint[16]; // = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};

  KeyCount() : key(""), count(0) {
  }

  virtual ~KeyCount() throw() {}

  std::string key;
  int32_t count;

  bool operator == (const KeyCount & rhs) const
  {
    if (!(key == rhs.key))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const KeyCount &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KeyCount & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Deletion__isset {
  _Deletion__isset() : super_column(false), predicate(false) {}
  bool super_column;
  bool predicate;
} _Deletion__isset;

class Deletion {
 public:

  static const char* ascii_fingerprint; // = "1E4E5C4E0D45BE5064D14AFD23096B8B";
  static const uint8_t binary_fingerprint[16]; // = {0x1E,0x4E,0x5C,0x4E,0x0D,0x45,0xBE,0x50,0x64,0xD1,0x4A,0xFD,0x23,0x09,0x6B,0x8B};

  Deletion() : timestamp(0), super_column("") {
  }

  virtual ~Deletion() throw() {}

  int64_t timestamp;
  std::string super_column;
  SlicePredicate predicate;

  _Deletion__isset __isset;

  bool operator == (const Deletion & rhs) const
  {
    if (!(timestamp == rhs.timestamp))
      return false;
    if (__isset.super_column != rhs.__isset.super_column)
      return false;
    else if (__isset.super_column && !(super_column == rhs.super_column))
      return false;
    if (__isset.predicate != rhs.__isset.predicate)
      return false;
    else if (__isset.predicate && !(predicate == rhs.predicate))
      return false;
    return true;
  }
  bool operator != (const Deletion &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Deletion & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Mutation__isset {
  _Mutation__isset() : column_or_supercolumn(false), deletion(false) {}
  bool column_or_supercolumn;
  bool deletion;
} _Mutation__isset;

class Mutation {
 public:

  static const char* ascii_fingerprint; // = "BFF60385C4A40853485F8D8CC62A8C25";
  static const uint8_t binary_fingerprint[16]; // = {0xBF,0xF6,0x03,0x85,0xC4,0xA4,0x08,0x53,0x48,0x5F,0x8D,0x8C,0xC6,0x2A,0x8C,0x25};

  Mutation() {
  }

  virtual ~Mutation() throw() {}

  ColumnOrSuperColumn column_or_supercolumn;
  Deletion deletion;

  _Mutation__isset __isset;

  bool operator == (const Mutation & rhs) const
  {
    if (__isset.column_or_supercolumn != rhs.__isset.column_or_supercolumn)
      return false;
    else if (__isset.column_or_supercolumn && !(column_or_supercolumn == rhs.column_or_supercolumn))
      return false;
    if (__isset.deletion != rhs.__isset.deletion)
      return false;
    else if (__isset.deletion && !(deletion == rhs.deletion))
      return false;
    return true;
  }
  bool operator != (const Mutation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Mutation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TokenRange {
 public:

  static const char* ascii_fingerprint; // = "8E2AD6401E83558ECFD6A13D74DD0A3F";
  static const uint8_t binary_fingerprint[16]; // = {0x8E,0x2A,0xD6,0x40,0x1E,0x83,0x55,0x8E,0xCF,0xD6,0xA1,0x3D,0x74,0xDD,0x0A,0x3F};

  TokenRange() : start_token(""), end_token("") {
  }

  virtual ~TokenRange() throw() {}

  std::string start_token;
  std::string end_token;
  std::vector<std::string>  endpoints;

  bool operator == (const TokenRange & rhs) const
  {
    if (!(start_token == rhs.start_token))
      return false;
    if (!(end_token == rhs.end_token))
      return false;
    if (!(endpoints == rhs.endpoints))
      return false;
    return true;
  }
  bool operator != (const TokenRange &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TokenRange & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AuthenticationRequest {
 public:

  static const char* ascii_fingerprint; // = "5EA2D527ECA3BA20C77AFC023EE8C05F";
  static const uint8_t binary_fingerprint[16]; // = {0x5E,0xA2,0xD5,0x27,0xEC,0xA3,0xBA,0x20,0xC7,0x7A,0xFC,0x02,0x3E,0xE8,0xC0,0x5F};

  AuthenticationRequest() {
  }

  virtual ~AuthenticationRequest() throw() {}

  std::map<std::string, std::string>  credentials;

  bool operator == (const AuthenticationRequest & rhs) const
  {
    if (!(credentials == rhs.credentials))
      return false;
    return true;
  }
  bool operator != (const AuthenticationRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ColumnDef__isset {
  _ColumnDef__isset() : index_type(false), index_name(false) {}
  bool index_type;
  bool index_name;
} _ColumnDef__isset;

class ColumnDef {
 public:

  static const char* ascii_fingerprint; // = "A5AC27AF2178A2927C057F23978619E4";
  static const uint8_t binary_fingerprint[16]; // = {0xA5,0xAC,0x27,0xAF,0x21,0x78,0xA2,0x92,0x7C,0x05,0x7F,0x23,0x97,0x86,0x19,0xE4};

  ColumnDef() : name(""), validation_class(""), index_name("") {
  }

  virtual ~ColumnDef() throw() {}

  std::string name;
  std::string validation_class;
  IndexType::type index_type;
  std::string index_name;

  _ColumnDef__isset __isset;

  bool operator == (const ColumnDef & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(validation_class == rhs.validation_class))
      return false;
    if (__isset.index_type != rhs.__isset.index_type)
      return false;
    else if (__isset.index_type && !(index_type == rhs.index_type))
      return false;
    if (__isset.index_name != rhs.__isset.index_name)
      return false;
    else if (__isset.index_name && !(index_name == rhs.index_name))
      return false;
    return true;
  }
  bool operator != (const ColumnDef &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ColumnDef & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CfDef__isset {
  _CfDef__isset() : column_type(false), comparator_type(false), subcomparator_type(false), comment(false), row_cache_size(false), key_cache_size(false), read_repair_chance(false), column_metadata(false), gc_grace_seconds(false), default_validation_class(false), id(false), min_compaction_threshold(false), max_compaction_threshold(false), row_cache_save_period_in_seconds(false), key_cache_save_period_in_seconds(false), memtable_flush_after_mins(false), memtable_throughput_in_mb(false), memtable_operations_in_millions(false) {}
  bool column_type;
  bool comparator_type;
  bool subcomparator_type;
  bool comment;
  bool row_cache_size;
  bool key_cache_size;
  bool read_repair_chance;
  bool column_metadata;
  bool gc_grace_seconds;
  bool default_validation_class;
  bool id;
  bool min_compaction_threshold;
  bool max_compaction_threshold;
  bool row_cache_save_period_in_seconds;
  bool key_cache_save_period_in_seconds;
  bool memtable_flush_after_mins;
  bool memtable_throughput_in_mb;
  bool memtable_operations_in_millions;
} _CfDef__isset;

class CfDef {
 public:

  static const char* ascii_fingerprint; // = "2198376BDF233688F56E7E7A62BD2725";
  static const uint8_t binary_fingerprint[16]; // = {0x21,0x98,0x37,0x6B,0xDF,0x23,0x36,0x88,0xF5,0x6E,0x7E,0x7A,0x62,0xBD,0x27,0x25};

  CfDef() : keyspace(""), name(""), column_type("Standard"), comparator_type("BytesType"), subcomparator_type(""), comment(""), row_cache_size(0), key_cache_size(200000), read_repair_chance(1), gc_grace_seconds(0), default_validation_class(""), id(0), min_compaction_threshold(0), max_compaction_threshold(0), row_cache_save_period_in_seconds(0), key_cache_save_period_in_seconds(0), memtable_flush_after_mins(0), memtable_throughput_in_mb(0), memtable_operations_in_millions(0) {
  }

  virtual ~CfDef() throw() {}

  std::string keyspace;
  std::string name;
  std::string column_type;
  std::string comparator_type;
  std::string subcomparator_type;
  std::string comment;
  double row_cache_size;
  double key_cache_size;
  double read_repair_chance;
  std::vector<ColumnDef>  column_metadata;
  int32_t gc_grace_seconds;
  std::string default_validation_class;
  int32_t id;
  int32_t min_compaction_threshold;
  int32_t max_compaction_threshold;
  int32_t row_cache_save_period_in_seconds;
  int32_t key_cache_save_period_in_seconds;
  int32_t memtable_flush_after_mins;
  int32_t memtable_throughput_in_mb;
  double memtable_operations_in_millions;

  _CfDef__isset __isset;

  bool operator == (const CfDef & rhs) const
  {
    if (!(keyspace == rhs.keyspace))
      return false;
    if (!(name == rhs.name))
      return false;
    if (__isset.column_type != rhs.__isset.column_type)
      return false;
    else if (__isset.column_type && !(column_type == rhs.column_type))
      return false;
    if (__isset.comparator_type != rhs.__isset.comparator_type)
      return false;
    else if (__isset.comparator_type && !(comparator_type == rhs.comparator_type))
      return false;
    if (__isset.subcomparator_type != rhs.__isset.subcomparator_type)
      return false;
    else if (__isset.subcomparator_type && !(subcomparator_type == rhs.subcomparator_type))
      return false;
    if (__isset.comment != rhs.__isset.comment)
      return false;
    else if (__isset.comment && !(comment == rhs.comment))
      return false;
    if (__isset.row_cache_size != rhs.__isset.row_cache_size)
      return false;
    else if (__isset.row_cache_size && !(row_cache_size == rhs.row_cache_size))
      return false;
    if (__isset.key_cache_size != rhs.__isset.key_cache_size)
      return false;
    else if (__isset.key_cache_size && !(key_cache_size == rhs.key_cache_size))
      return false;
    if (__isset.read_repair_chance != rhs.__isset.read_repair_chance)
      return false;
    else if (__isset.read_repair_chance && !(read_repair_chance == rhs.read_repair_chance))
      return false;
    if (__isset.column_metadata != rhs.__isset.column_metadata)
      return false;
    else if (__isset.column_metadata && !(column_metadata == rhs.column_metadata))
      return false;
    if (__isset.gc_grace_seconds != rhs.__isset.gc_grace_seconds)
      return false;
    else if (__isset.gc_grace_seconds && !(gc_grace_seconds == rhs.gc_grace_seconds))
      return false;
    if (__isset.default_validation_class != rhs.__isset.default_validation_class)
      return false;
    else if (__isset.default_validation_class && !(default_validation_class == rhs.default_validation_class))
      return false;
    if (__isset.id != rhs.__isset.id)
      return false;
    else if (__isset.id && !(id == rhs.id))
      return false;
    if (__isset.min_compaction_threshold != rhs.__isset.min_compaction_threshold)
      return false;
    else if (__isset.min_compaction_threshold && !(min_compaction_threshold == rhs.min_compaction_threshold))
      return false;
    if (__isset.max_compaction_threshold != rhs.__isset.max_compaction_threshold)
      return false;
    else if (__isset.max_compaction_threshold && !(max_compaction_threshold == rhs.max_compaction_threshold))
      return false;
    if (__isset.row_cache_save_period_in_seconds != rhs.__isset.row_cache_save_period_in_seconds)
      return false;
    else if (__isset.row_cache_save_period_in_seconds && !(row_cache_save_period_in_seconds == rhs.row_cache_save_period_in_seconds))
      return false;
    if (__isset.key_cache_save_period_in_seconds != rhs.__isset.key_cache_save_period_in_seconds)
      return false;
    else if (__isset.key_cache_save_period_in_seconds && !(key_cache_save_period_in_seconds == rhs.key_cache_save_period_in_seconds))
      return false;
    if (__isset.memtable_flush_after_mins != rhs.__isset.memtable_flush_after_mins)
      return false;
    else if (__isset.memtable_flush_after_mins && !(memtable_flush_after_mins == rhs.memtable_flush_after_mins))
      return false;
    if (__isset.memtable_throughput_in_mb != rhs.__isset.memtable_throughput_in_mb)
      return false;
    else if (__isset.memtable_throughput_in_mb && !(memtable_throughput_in_mb == rhs.memtable_throughput_in_mb))
      return false;
    if (__isset.memtable_operations_in_millions != rhs.__isset.memtable_operations_in_millions)
      return false;
    else if (__isset.memtable_operations_in_millions && !(memtable_operations_in_millions == rhs.memtable_operations_in_millions))
      return false;
    return true;
  }
  bool operator != (const CfDef &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CfDef & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _KsDef__isset {
  _KsDef__isset() : strategy_options(false) {}
  bool strategy_options;
} _KsDef__isset;

class KsDef {
 public:

  static const char* ascii_fingerprint; // = "75BE67EF161D3DF7F283FF5C63C5F31A";
  static const uint8_t binary_fingerprint[16]; // = {0x75,0xBE,0x67,0xEF,0x16,0x1D,0x3D,0xF7,0xF2,0x83,0xFF,0x5C,0x63,0xC5,0xF3,0x1A};

  KsDef() : name(""), strategy_class(""), replication_factor(0) {
  }

  virtual ~KsDef() throw() {}

  std::string name;
  std::string strategy_class;
  std::map<std::string, std::string>  strategy_options;
  int32_t replication_factor;
  std::vector<CfDef>  cf_defs;

  _KsDef__isset __isset;

  bool operator == (const KsDef & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(strategy_class == rhs.strategy_class))
      return false;
    if (__isset.strategy_options != rhs.__isset.strategy_options)
      return false;
    else if (__isset.strategy_options && !(strategy_options == rhs.strategy_options))
      return false;
    if (!(replication_factor == rhs.replication_factor))
      return false;
    if (!(cf_defs == rhs.cf_defs))
      return false;
    return true;
  }
  bool operator != (const KsDef &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const KsDef & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

}}} // namespace

#endif
