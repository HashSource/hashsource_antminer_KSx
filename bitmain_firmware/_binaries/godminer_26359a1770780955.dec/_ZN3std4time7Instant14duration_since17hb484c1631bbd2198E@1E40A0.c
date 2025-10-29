// Alternative name is '_ZN3std4time7Instant25saturating_duration_since17h284c7d32c4a7dd9dE'
__int64 __fastcall std::time::Instant::duration_since(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // r0
  int v6; // r2
  _DWORD v7[4]; // [sp+0h] [bp-28h] BYREF
  _QWORD v8[2]; // [sp+10h] [bp-18h] BYREF
  int v9; // [sp+20h] [bp-8h]

  v7[2] = a5;
  v7[0] = a3;
  v7[1] = a4;
  sub_1F3B4C(v8, a1, v7);
  result = v8[1];
  v6 = v9;
  if ( v8[0] )
    v6 = 1000000000;
  if ( v6 == 1000000000 )
    return 0;
  return result;
}
