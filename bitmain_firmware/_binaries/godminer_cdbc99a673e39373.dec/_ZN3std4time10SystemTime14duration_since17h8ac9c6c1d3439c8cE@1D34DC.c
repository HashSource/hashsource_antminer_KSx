__int64 __fastcall std::time::SystemTime::duration_since(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r1
  int v7; // r2
  _DWORD v9[4]; // [sp+0h] [bp-28h] BYREF
  __int64 v10; // [sp+10h] [bp-18h] BYREF
  int v11; // [sp+18h] [bp-10h]
  int v12; // [sp+1Ch] [bp-Ch]
  int v13; // [sp+20h] [bp-8h]

  v9[2] = a5;
  v9[0] = a3;
  v9[1] = a4;
  sub_1E29F8(&v10, a2, v9);
  v6 = v12;
  v7 = v13;
  if ( v10 )
  {
    *(_DWORD *)(a1 + 8) = v11;
    *(_DWORD *)(a1 + 12) = v6;
    *(_DWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = 1;
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v11;
    *(_DWORD *)(a1 + 12) = v6;
    *(_DWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = 0;
    return 0;
  }
}
