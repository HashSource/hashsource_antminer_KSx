_DWORD *__fastcall <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(__int64 a1)
{
  int v1; // r4
  int v2; // r1
  _DWORD *result; // r0
  int v4; // lr
  int v5; // r3
  int v6; // r5
  _DWORD *v7; // r4
  int v8; // r2
  int v9; // r6
  int v10; // r7
  __int64 v11; // [sp+0h] [bp-38h] BYREF
  int v12; // [sp+8h] [bp-30h]
  int v13; // [sp+Ch] [bp-2Ch]
  int v14; // [sp+10h] [bp-28h]
  int v15; // [sp+14h] [bp-24h]
  int v16; // [sp+18h] [bp-20h]
  int v17; // [sp+1Ch] [bp-1Ch]
  int v18; // [sp+20h] [bp-18h]
  int v19; // [sp+24h] [bp-14h]
  int v20; // [sp+28h] [bp-10h]
  int v21; // [sp+2Ch] [bp-Ch]
  int v22; // [sp+30h] [bp-8h]

  v1 = a1;
  LODWORD(a1) = &v11;
  <std::sys::unix::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(a1);
  if ( v11 )
  {
    v2 = v16;
    result = (_DWORD *)(v1 + 8);
    v4 = v13;
    v5 = v14;
    v6 = v15;
    if ( v16 )
    {
      v20 = v17;
      v21 = v18;
      v22 = v19;
    }
    *result = v12;
    *(_DWORD *)(v1 + 12) = v4;
    *(_QWORD *)v1 = 1;
    v7 = (_DWORD *)(v1 + 24);
    v8 = v20;
    v9 = v21;
    v10 = v22;
    *v7 = v2;
    v7[1] = v8;
    v7[2] = v9;
    v7[3] = v10;
    result[2] = v5;
    result[3] = v6;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 4) = 0;
    return 0;
  }
  return result;
}
