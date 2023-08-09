#include <iostream>
#include <random>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>
#include "classes.hpp"
using namespace std;
namespace boost_uuid = boost::uuids;

// use fix protocol instead
string build_an_order(){
  string order = "";
  char order_type_options[3] = {'B', 'S', 'C'};
  bool partial_fill_allowed_options[2] = {true, false};
  string order_id = gen_uuid();
  char order_class_options = 'L';
  int customer_id = 1;
  int stock_id = 1;
  char order_type = 'B';
  int unit_price = 2.0;
  int num_shares = 1;
  bool partial_fill_allowed = true;
  int expire_time = 1;
  time_t timestamp = 1;
  return order;
}


string gen_uuid(){
    string uuid_str = boost::lexical_cast<std::string>(boost::uuids::random_generator()());
    return uuid_str;
}