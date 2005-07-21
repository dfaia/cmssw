#ifndef x_TinyDom_h
#define x_TinyDom_h

#include "DetectorDescription/RegressionTest/src/TagName.h"
#include "DetectorDescription/Core/interface/adjgraph.h"
#include "DetectorDescription/Core/interface/graphwalker.h"
#include <string>
#include <map>
#include <iostream>

using std::string;
using std::map;
using std::ostream;

class AnotherDummy {};

  typedef TagName NodeName;
  typedef TagName AttName;
  typedef TagName AttValue;
  typedef std::map<AttName,AttValue> AttList;
  typedef graph<NodeName, AttList> TinyDom;
  typedef graphwalker<NodeName, AttList> TinyDomWalker;
  
  void TinyDomPrettyPrint(ostream &, const TinyDom &);

#endif
