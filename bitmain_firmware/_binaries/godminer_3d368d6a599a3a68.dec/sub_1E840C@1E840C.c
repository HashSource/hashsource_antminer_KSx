void __fastcall sub_1E840C(int *a1, int a2, int a3)
{
  void (__fastcall *v6)(char *, int, int *); // r9
  char **v7; // r3
  const char *v8; // r4
  int v9; // r4
  int v10; // r0
  int v11; // r1
  void **v12; // r4
  char v13[4]; // [sp+0h] [bp-38h] BYREF
  int v14; // [sp+4h] [bp-34h]
  int v15; // [sp+8h] [bp-30h] BYREF
  void **v16; // [sp+Ch] [bp-2Ch]
  char **v17; // [sp+10h] [bp-28h]
  int v18; // [sp+14h] [bp-24h]
  int *v19; // [sp+18h] [bp-20h]
  int v20; // [sp+1Ch] [bp-1Ch]
  int v21; // [sp+20h] [bp-18h] BYREF
  void **v22; // [sp+24h] [bp-14h]
  char **v23; // [sp+28h] [bp-10h]
  int v24; // [sp+2Ch] [bp-Ch]
  const char *v25; // [sp+30h] [bp-8h]
  int (__fastcall *v26)(_DWORD *); // [sp+34h] [bp-4h]

  v6 = *(void (__fastcall **)(char *, int, int *))(a3 + 36);
  v17 = &off_2DF35C;
  v18 = 4;
  v20 = 3;
  v19 = &v21;
  v7 = (char **)a1[1];
  v8 = (const char *)a1[2];
  v21 = *a1;
  v26 = sub_1AD2D4;
  v24 = (int)sub_1AD2C0;
  v22 = (void **)sub_1AD2C0;
  v15 = 0;
  v25 = v8;
  v23 = v7;
  v6(v13, a2, &v15);
  if ( v13[0] == 3 )
  {
    v9 = v14;
    (**(void (__fastcall ***)(_DWORD))(v14 + 4))(*(_DWORD *)v14);
    if ( *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) )
      _rust_dealloc(*(void **)v9);
    _rust_dealloc((void *)v9);
  }
  v10 = *(unsigned __int8 *)a1[3];
  if ( v10 != 3 )
  {
    if ( v10 == 2 )
    {
      __dmb(0xBu);
      do
        v11 = __ldrex((unsigned __int8 *)&unk_2E7F54);
      while ( __strex(0, (unsigned __int8 *)&unk_2E7F54) );
      __dmb(0xBu);
      if ( !v11 )
        return;
      v24 = 1;
      v23 = &off_2DF37C;
      v25 = aRustc9eb3afe9e;
      v26 = 0;
      v21 = 0;
      v6((char *)&v15, a2, &v21);
      if ( (unsigned __int8)v15 != 3 )
        return;
      v12 = v16;
      (*(void (__fastcall **)(void *))v16[1])(*v16);
    }
    else
    {
      if ( v10 == 1 )
      {
        sub_1E5674((int)&v21, a2, a3, 1);
        if ( (unsigned __int8)v21 != 3 )
          return;
      }
      else
      {
        sub_1E5674((int)&v21, a2, a3, 0);
        if ( (unsigned __int8)v21 != 3 )
          return;
      }
      v12 = v22;
      (*(void (__fastcall **)(void *))v22[1])(*v22);
    }
    if ( *((_DWORD *)v12[1] + 1) )
      _rust_dealloc(*v12);
    _rust_dealloc(v12);
  }
}
