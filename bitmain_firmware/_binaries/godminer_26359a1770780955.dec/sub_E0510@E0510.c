int __fastcall sub_E0510(_DWORD *a1)
{
  int v1; // r7
  int v2; // r4
  int v4; // r12
  void (__fastcall *v5)(_DWORD *, __int64 *); // r6
  __int64 v7; // [sp+20h] [bp-14h] BYREF
  __int64 v8; // [sp+28h] [bp-Ch]

  v1 = a1[83];
  if ( v1 > 0 )
  {
    v2 = 0;
    do
    {
      v4 = a1[107];
      v7 = 0;
      v8 = 0;
      LOBYTE(v4) = v4 * v2++;
      v5 = (void (__fastcall *)(_DWORD *, __int64 *))a1[71];
      BYTE1(v8) = v4;
      v5(a1, &v7);
    }
    while ( v1 != v2 );
  }
  return 12;
}
