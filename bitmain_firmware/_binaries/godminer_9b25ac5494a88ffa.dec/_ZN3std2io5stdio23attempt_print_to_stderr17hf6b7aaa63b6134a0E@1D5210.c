void __fastcall std::io::stdio::attempt_print_to_stderr(int *a1)
{
  int v2; // r3
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r2
  int v8; // r3
  int v9; // r5
  int v10; // r6
  int v11; // r7
  int v12; // r4
  int v13; // [sp+0h] [bp-28h] BYREF
  int v14; // [sp+4h] [bp-24h]
  void *v15; // [sp+8h] [bp-20h] BYREF
  void **v16; // [sp+Ch] [bp-1Ch] BYREF
  int v17; // [sp+10h] [bp-18h] BYREF
  int v18; // [sp+14h] [bp-14h]
  int v19; // [sp+18h] [bp-10h]
  int v20; // [sp+1Ch] [bp-Ch]
  int v21; // [sp+20h] [bp-8h]
  int v22; // [sp+24h] [bp-4h]

  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  v5 = a1[4];
  v6 = a1[5];
  v17 = *a1;
  v18 = v2;
  v19 = v3;
  v20 = v4;
  v21 = v5;
  v22 = v6;
  if ( !sub_1D4FC0(&v17) )
  {
    v15 = &unk_30AC44;
    v16 = &v15;
    v7 = a1[1];
    v8 = a1[2];
    v9 = a1[3];
    v10 = a1[4];
    v11 = a1[5];
    v17 = *a1;
    v18 = v7;
    v19 = v8;
    v20 = v9;
    v21 = v10;
    v22 = v11;
    <&std::io::stdio::Stderr as std::io::Write>::write_fmt(&v13, (unsigned int ***)&v16, &v17);
    if ( (unsigned __int8)v13 == 3 )
    {
      v12 = v14;
      (**(void (__fastcall ***)(_DWORD))(v14 + 4))(*(_DWORD *)v14);
      if ( *(_DWORD *)(*(_DWORD *)(v12 + 4) + 4) )
        _rust_dealloc(*(void **)v12);
      _rust_dealloc((void *)v12);
    }
  }
}
