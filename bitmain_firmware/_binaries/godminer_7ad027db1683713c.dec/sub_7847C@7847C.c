char *sub_7847C()
{
  char *result; // r0
  int v1; // r1
  _DWORD v2[2]; // [sp+0h] [bp-10h] BYREF
  int *v3; // [sp+8h] [bp-8h] BYREF
  char v4; // [sp+Ch] [bp-4h] BYREF

  result = &byte_2E9654;
  v1 = dword_2E9698;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = &dword_2E9678;
    v3 = v2;
    v2[1] = &v4;
    return (char *)sub_7B014(&v3);
  }
  return result;
}
