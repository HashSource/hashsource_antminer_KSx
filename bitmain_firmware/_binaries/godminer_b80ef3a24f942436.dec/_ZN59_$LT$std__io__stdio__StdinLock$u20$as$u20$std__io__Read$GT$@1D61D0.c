unsigned int __fastcall <std::io::stdio::StdinLock as std::io::Read>::read_to_end(int a1, int *a2, unsigned int *a3)
{
  int v3; // r4
  unsigned int v6; // r7
  int v7; // r0
  int v8; // r1
  const void *v9; // r9
  size_t v10; // r5
  bool v11; // zf
  unsigned int v12; // r1
  int v13; // r0
  unsigned int result; // r0
  unsigned int v15; // [sp+0h] [bp-8h] BYREF
  int v16; // [sp+4h] [bp-4h]

  v3 = *a2;
  v6 = a3[2];
  v7 = *(_DWORD *)(*a2 + 8);
  v8 = *(_DWORD *)(*a2 + 16);
  v9 = (const void *)(v7 + v8);
  v10 = *(_DWORD *)(v3 + 20) - v8;
  if ( *a3 - v6 < v10 )
  {
    sub_79590(a3, a3[2], v10);
    v6 = a3[2];
  }
  memcpy((void *)(a3[1] + v6), v9, v10);
  a3[2] = v6 + v10;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  sub_1D97C4(&v15, a3);
  v11 = (unsigned __int8)v15 == 0;
  if ( !(_BYTE)v15 )
    v11 = v16 == 9;
  if ( v11 )
  {
    v13 = 0;
  }
  else
  {
    v12 = v15;
    v13 = v16;
    if ( (unsigned __int8)v15 != 4 )
    {
      *(_DWORD *)(a1 + 4) = v16;
      *(_BYTE *)(a1 + 3) = HIBYTE(v12);
      *(_BYTE *)a1 = v12;
      *(_WORD *)(a1 + 1) = v12 >> 8;
      return v12 >> 8;
    }
  }
  result = v13 + v10;
  *(_BYTE *)a1 = 4;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
