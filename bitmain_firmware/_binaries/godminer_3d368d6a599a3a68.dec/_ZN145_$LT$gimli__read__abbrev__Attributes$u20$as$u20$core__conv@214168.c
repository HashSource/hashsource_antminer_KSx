_DWORD *__fastcall <gimli::read::abbrev::Attributes as core::convert::From<alloc::vec::Vec<gimli::read::abbrev::AttributeSpecification>>>::from(
        _DWORD *result,
        int *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  *result = 1;
  result[1] = v2;
  result[2] = v3;
  result[3] = v4;
  return result;
}
