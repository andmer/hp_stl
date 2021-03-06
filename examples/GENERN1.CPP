// This example compiles using the new STL<ToolKit> from ObjectSpace, Inc.
// STL<ToolKit> is the EASIEST to use STL that works on most platform/compiler 
// combinations, including cfront, Borland, Visual C++, C Set++, ObjectCenter, 
// and the latest Sun & HP compilers. Read the README.STL file in this 
// directory for more information, or send email to info@objectspace.com.
// For an overview of STL, read the OVERVIEW.STL file in this directory.

#include <stl.h>
#include <iostream.h>
#include <stdlib.h>

int main ()
{
  vector <int> v1 (10);
  generate_n (v1.begin (), v1.size (), rand);
  for (int i = 0; i < 10; i++)
    cout << v1[i] << ' ';
  cout << endl;
  return 0;
}
