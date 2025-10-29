int *__fastcall sub_7F7D8(int *result)
{
  int v1; // r2
  bool v2; // zf
  int *v3; // r4

  v1 = *result;
  v2 = *result == -1;
  byte_2D239C = 1;
  if ( !v2 )
  {
    v3 = result;
    shutdown(v1, 2);
    result = (int *)close(*v3);
    *v3 = -1;
  }
  return result;
}
