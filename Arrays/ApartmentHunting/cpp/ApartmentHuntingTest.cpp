// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./Thread_5.h"

// ______________________________________________________________
void  Vehicle::example() {

}

cks": [
      {"gym": false, �chool": true, �tore": false},
          {"gym": true, �chool": false, �tore": false},
              {"gym": true, �chool": true, �tore": false},
                  {"gym": false, �chool": true, �tore": false},
                      {"gym": false, �chool": true, �tore": true}
                        ],
                          "reqs": ["gym", �chool", �tore"]
                          }
// sol 3
//
{
    "blocks": [
          {"gym": false, �ffice": true, �chool": true, �tore": false},
          {"gym": true, �ffice": false, �chool": false, �tore": false},
              {"gym": true, �ffice": false, �chool": true, �tore": false},
                  {"gym": false, �ffice": false, �chool": true, �tore": false},
                      {"gym": false, �ffice": false, �chool": true, �tore": true}
      ],
        "reqs": ["gym", �ffice", �chool", �tore"]
}

// 2
//
{
    "blocks": [
          {"gym": false, �ffice": true, �chool": true, �tore": false},
          {"gym": true, �ffice": false, �chool": false, �tore": false},
              {"gym": true, �ffice": false, �chool": true, �tore": false},
                  {"gym": false, �ffice": false, �chool": true, �tore": false},
                      {"gym": false, �ffice": false, �chool": true, �tore": false},
                          {"gym": false, �ffice": false, �chool": true, �tore": true}
      ],
        "reqs": ["gym", �ffice", �chool", �tore"]
}
// 2
//
"
{
  "blocks": [
    {
      "foo": true,
      "gym": false,
      "kappa": false,
      "office": true,
      "school": true,
      "store": false
    },
    {
      "foo": true,
      "gym": true,
      "kappa": false,
      "office": false,
      "school": false,
      "store": false
    },
    {
      "foo": true,
      "gym": true,
      "kappa": false,
      "office": false,
      "school": true,
      "store": false
    },
    {
      "foo": true,
      "gym": false,
      "kappa": false,
      "office": false,
      "school": true,
      "store": false
    },
    {
      "foo": true,
      "gym": true,
      "kappa": false,
      "office": false,
      "school": true,
      "store": false
    },
    {
      "foo": true,
      "gym": false,
      "kappa": false,
      "office": false,
      "school": true,
      "store": true
    }
  ],
  "reqs": ["gym", "school", "store"]
}
// 4



{
  "blocks": [
    {"gym": true, "school": true, "store": false},
    {"gym": false, "school": false, "store": false},
    {"gym": false, "school": true, "store": false},
    {"gym": false, "school": false, "store": false},
    {"gym": false, "school": false, "store": true},
    {"gym": true, "school": false, "store": false},
    {"gym": false, "school": false, "store": false},
    {"gym": false, "school": false, "store": false},
    {"gym": false, "school": false, "store": false},
    {"gym": false, "school": true, "store": false}
  ],
  "reqs": ["gym", "school", "store"]
}
// 2
{
  "blocks": [
    {"gym": true, "pool": false, "school": true, "store": false},
    {"gym": false, "pool": false, "school": false, "store": false},
    {"gym": false, "pool": false, "school": true, "store": false},
    {"gym": false, "pool": false, "school": false, "store": false},
    {"gym": false, "pool": false, "school": false, "store": true},
    {"gym": true, "pool": false, "school": false, "store": false},
    {"gym": false, "pool": false, "school": false, "store": false},
    {"gym": false, "pool": false, "school": false, "store": false},
    {"gym": false, "pool": false, "school": false, "store": false},
    {"gym": false, "pool": false, "school": true, "store": false},
    {"gym": false, "pool": true, "school": false, "store": false}
  ],
  "reqs": ["gym", "pool", "school", "store"]
}
// 7

{
  "blocks": [
    {
      "gym": true,
      "office": false,
      "pool": false,
      "school": true,
      "store": false
    },
    {
      "gym": false,
      "office": false,
      "pool": false,
      "school": false,
      "store": false
    },
    {
      "gym": false,
      "office": true,
      "pool": false,
      "school": true,
      "store": false
    },
    {
      "gym": false,
      "office": true,
      "pool": false,
      "school": false,
      "store": false
    },
    {
      "gym": false,
      "office": false,
      "pool": false,
      "school": false,
      "store": true
    },
    {
      "gym": true,
      "office": true,
      "pool": false,
      "school": false,
      "store": false
    },
    {
      "gym": false,
      "office": false,
      "pool": true,
      "school": false,
      "store": false
    },
    {
      "gym": false,
      "office": false,
      "pool": false,
      "school": false,
      "store": false
    },
    {
      "gym": false,
      "office": false,
      "pool": false,
      "school": false,
      "store": false
    },
    {
      "gym": false,
      "office": false,
      "pool": false,
      "school": true,
      "store": false
    },
    {
      "gym": false,
      "office": false,
      "pool": true,
      "school": false,
      "store": false
    }
  ],
  "reqs": ["gym", "pool", "school", "store"]
} // 4
