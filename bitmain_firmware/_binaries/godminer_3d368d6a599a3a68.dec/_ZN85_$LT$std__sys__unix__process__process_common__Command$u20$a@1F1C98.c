int __fastcall <std::sys::unix::process::process_common::Command as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r6
  int v13; // r0
  char **v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r6
  int v19; // r3
  int v20; // r2
  bool v21; // zf
  int v22; // r1
  size_t v23; // r2
  int v24; // r0
  int v25; // r7
  int v26; // r4
  bool v27; // zf
  char **v28; // r2
  int v29[2]; // [sp+8h] [bp-64h] BYREF
  char **v30; // [sp+10h] [bp-5Ch]
  int v31; // [sp+14h] [bp-58h]
  int **v32; // [sp+18h] [bp-54h]
  int v33; // [sp+1Ch] [bp-50h]
  char **v34; // [sp+20h] [bp-4Ch]
  int v35; // [sp+28h] [bp-44h]
  _DWORD v36[2]; // [sp+2Ch] [bp-40h] BYREF
  int *v37; // [sp+34h] [bp-38h] BYREF
  int (__fastcall *v38)(_DWORD *); // [sp+38h] [bp-34h]
  char **v39; // [sp+3Ch] [bp-30h]
  int v40; // [sp+40h] [bp-2Ch]
  _DWORD *v41; // [sp+44h] [bp-28h]
  int v42; // [sp+48h] [bp-24h]
  _DWORD v43[4]; // [sp+4Ch] [bp-20h] BYREF
  int v44; // [sp+5Ch] [bp-10h] BYREF
  int v45; // [sp+60h] [bp-Ch]
  void *ptr; // [sp+64h] [bp-8h]

  if ( core::fmt::Formatter::alternate(a2) )
  {
    core::fmt::Formatter::debug_struct(v29, a2, aCommand, 7);
    v4 = core::fmt::builders::DebugStruct::field(v29, aProgram, 7, a1 + 32, &off_2DF948);
    core::fmt::builders::DebugStruct::field(v4, "args && ", 4, a1 + 88, &off_2DF958);
    v5 = *(_BYTE *)(a1 + 12) == 0;
    if ( !*(_BYTE *)(a1 + 12) )
      v5 = *(_DWORD *)(a1 + 8) == 0;
    if ( !v5 )
      core::fmt::builders::DebugStruct::field(v29, aEnv, 3, a1, &off_2DF968);
    if ( *(_DWORD *)(a1 + 16) )
      core::fmt::builders::DebugStruct::field(v29, aCwd, 3, a1 + 16, &off_2DF978);
    if ( *(_DWORD *)(a1 + 64) == 1 )
    {
      core::fmt::builders::DebugStruct::field(v29, aUid, 3, a1 + 64, &off_2DF988);
      v6 = a1 + 72;
      if ( *(_DWORD *)(a1 + 72) != 1 )
      {
LABEL_10:
        v7 = a1 + 24;
        if ( !*(_DWORD *)(a1 + 24) )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
    else
    {
      v6 = a1 + 72;
      if ( *(_DWORD *)(a1 + 72) != 1 )
        goto LABEL_10;
    }
    core::fmt::builders::DebugStruct::field(v29, aGid, 3, v6, &off_2DF988);
    v7 = a1 + 24;
    if ( !*(_DWORD *)(a1 + 24) )
    {
LABEL_12:
      if ( *(_DWORD *)(a1 + 40) == 4 )
      {
        v8 = a1 + 48;
        if ( *(_DWORD *)(a1 + 48) == 4 )
          goto LABEL_14;
      }
      else
      {
        core::fmt::builders::DebugStruct::field(v29, aStdin_2, 5, a1 + 40, &off_2DF9A8);
        v8 = a1 + 48;
        if ( *(_DWORD *)(a1 + 48) == 4 )
        {
LABEL_14:
          v9 = a1 + 56;
          if ( *(_DWORD *)(a1 + 56) == 4 )
            goto LABEL_15;
          goto LABEL_50;
        }
      }
      core::fmt::builders::DebugStruct::field(v29, aStdout_0, 6, v8, &off_2DF9A8);
      v9 = a1 + 56;
      if ( *(_DWORD *)(a1 + 56) == 4 )
      {
LABEL_15:
        v10 = a1 + 80;
        if ( *(_DWORD *)(a1 + 80) != 1 )
        {
LABEL_17:
          core::fmt::builders::DebugStruct::field(v29, aCreatePidfd, 12, a1 + 126, &off_2DE758);
          return core::fmt::builders::DebugStruct::finish(v29);
        }
LABEL_16:
        core::fmt::builders::DebugStruct::field(v29, aPgroup, 6, v10, &off_2DF9B8);
        goto LABEL_17;
      }
LABEL_50:
      core::fmt::builders::DebugStruct::field(v29, aStderr_1, 6, v9, &off_2DF9A8);
      v10 = a1 + 80;
      if ( *(_DWORD *)(a1 + 80) != 1 )
        goto LABEL_17;
      goto LABEL_16;
    }
LABEL_11:
    core::fmt::builders::DebugStruct::field(v29, aGroups, 6, v7, &off_2DF998);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 16) )
  {
    v11 = 1;
    v44 = a1 + 16;
    v31 = 2;
    v32 = &v37;
    v38 = sub_1AC5D8;
    v29[0] = 0;
    v37 = &v44;
    v30 = &off_2DF9C8;
    v33 = 1;
    if ( core::fmt::Formatter::write_fmt(a2, v29) )
      return v11;
  }
  v13 = *(_DWORD *)a1;
  v14 = *(char ***)(a1 + 4);
  v15 = *(_DWORD *)(a1 + 8);
  if ( !v14 )
    v15 = 0;
  v33 = *(_DWORD *)a1;
  v29[1] = v13;
  v34 = v14;
  v30 = v14;
  v35 = v15;
  v32 = (int **)(2 * (v14 == 0));
  v29[0] = (int)v32;
  v16 = sub_1AB988(v29);
  if ( !v16 )
  {
LABEL_32:
    if ( *(_DWORD *)(a1 + 96) )
    {
      v22 = *(_DWORD *)(a1 + 92);
      v23 = *(_DWORD *)(a1 + 36);
      if ( v23 == *(_DWORD *)(v22 + 4) && !bcmp(*(const void **)(a1 + 32), *(const void **)v22, v23) )
        goto LABEL_37;
      v31 = 2;
      v11 = 1;
      v32 = &v37;
      v33 = 1;
      v29[0] = 0;
      v38 = (int (__fastcall *)(_DWORD *))<alloc::ffi::c_str::CString as core::fmt::Debug>::fmt;
      v30 = (char **)&off_2DFA00;
      v37 = (int *)(a1 + 32);
      if ( core::fmt::Formatter::write_fmt(a2, v29) )
        return v11;
      if ( *(_DWORD *)(a1 + 96) )
      {
LABEL_37:
        v11 = 1;
        v38 = (int (__fastcall *)(_DWORD *))<alloc::ffi::c_str::CString as core::fmt::Debug>::fmt;
        v32 = &v37;
        v37 = *(int **)(a1 + 92);
        v30 = &off_2DE980;
        v31 = 1;
        v33 = 1;
        v29[0] = 0;
        if ( !core::fmt::Formatter::write_fmt(a2, v29) )
        {
          v24 = *(_DWORD *)(a1 + 96);
          if ( !v24 )
            core::slice::index::slice_start_index_len_fail();
          v11 = 0;
          if ( v24 != 1 )
          {
            v25 = 8 * v24 - 16;
            v26 = *(_DWORD *)(a1 + 92) + 8;
            do
            {
              v44 = v26;
              v31 = 1;
              v33 = 1;
              v30 = (char **)&off_2DFA30;
              v32 = &v37;
              v29[0] = 0;
              v37 = &v44;
              v38 = sub_1AC5D8;
              v11 = core::fmt::Formatter::write_fmt(a2, v29);
              if ( v11 )
                break;
              v26 += 8;
              v5 = v25 == 0;
              v25 -= 8;
            }
            while ( !v5 );
          }
        }
        return v11;
      }
      v28 = &off_2DFA10;
    }
    else
    {
      v28 = &off_2DF9F0;
    }
    core::panicking::panic_bounds_check(0, 0, (int)v28);
  }
  while ( 1 )
  {
    v18 = *(_DWORD *)(v17 + 4);
    if ( v18 )
      break;
LABEL_25:
    v16 = sub_1AB988(v29);
    if ( !v16 )
      goto LABEL_32;
  }
  v19 = *(_DWORD *)(v16 + 4);
  v20 = *(_DWORD *)(v16 + 8);
  v36[1] = *(_DWORD *)(v17 + 8);
  v36[0] = v18;
  alloc::string::String::from_utf8_lossy(&v44, v19, v20);
  v43[3] = sub_1ACAAC;
  v43[2] = v36;
  v43[0] = &v44;
  v43[1] = sub_1BD440;
  v40 = 3;
  v41 = v43;
  v39 = &off_2DF9D8;
  v37 = 0;
  v42 = 2;
  if ( !core::fmt::Formatter::write_fmt(a2, &v37) )
  {
    v21 = v44 == 0;
    if ( v44 )
      v21 = v45 == 0;
    if ( !v21 )
      _rust_dealloc(ptr);
    goto LABEL_25;
  }
  v27 = v44 == 0;
  if ( v44 )
    v27 = v45 == 0;
  if ( !v27 )
    _rust_dealloc(ptr);
  return 1;
}
