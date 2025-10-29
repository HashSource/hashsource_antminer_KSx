void __fastcall __noreturn core::str::slice_error_fail_rt(
        char *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  unsigned int v5; // lr
  int v6; // r6
  const char *v7; // r4
  bool v8; // cc
  unsigned int *v9; // r0
  unsigned int v10; // r3
  unsigned int v11; // lr
  unsigned int v12; // r3
  char *v13; // r4
  char *v14; // r5
  unsigned int v15; // r3
  char *v16; // r5
  int v17; // t1
  char *v18; // r5
  int v19; // t1
  char *v20; // r5
  int v21; // t1
  char *v22; // r0
  int v23; // r1
  unsigned int v24; // r2
  int v25; // r1
  int v26; // r1
  int v27; // r6
  int v28; // r6
  unsigned int v29; // r0
  bool v30; // cf
  unsigned int v31; // [sp+8h] [bp-68h] BYREF
  unsigned int v32; // [sp+Ch] [bp-64h] BYREF
  char *v33; // [sp+10h] [bp-60h] BYREF
  unsigned int v34; // [sp+14h] [bp-5Ch]
  _DWORD v35[2]; // [sp+18h] [bp-58h] BYREF
  unsigned int v36; // [sp+20h] [bp-50h] BYREF
  unsigned int v37; // [sp+24h] [bp-4Ch] BYREF
  _DWORD v38[2]; // [sp+28h] [bp-48h] BYREF
  _DWORD v39[2]; // [sp+30h] [bp-40h] BYREF
  char **v40; // [sp+38h] [bp-38h]
  int v41; // [sp+3Ch] [bp-34h]
  unsigned int **v42; // [sp+40h] [bp-30h]
  int v43; // [sp+44h] [bp-2Ch]
  unsigned int *v44; // [sp+48h] [bp-28h] BYREF
  int (__fastcall *v45)(_DWORD, _DWORD); // [sp+4Ch] [bp-24h]
  _DWORD *v46; // [sp+50h] [bp-20h]
  int (*v47)(); // [sp+54h] [bp-1Ch]
  char **v48; // [sp+58h] [bp-18h]
  int (__fastcall *v49)(int, int *); // [sp+5Ch] [bp-14h]
  char **v50; // [sp+60h] [bp-10h]
  int (*v51)(); // [sp+64h] [bp-Ch]
  _DWORD *v52; // [sp+68h] [bp-8h]
  int (*v53)(); // [sp+6Ch] [bp-4h]

  v32 = a4;
  v31 = a3;
  if ( a2 <= 0x100 )
  {
    v34 = a2;
    v7 = aLibraryCoreSrc;
  }
  else
  {
    v5 = 256;
    if ( a1[256] <= -65 )
    {
      v5 = 255;
      if ( a1[255] <= -65 )
      {
        v5 = 254;
        if ( a1[254] <= -65 )
          v5 = 253;
      }
    }
    if ( v5 < a2 )
    {
      if ( a1[v5] > -65 )
      {
        v6 = 5;
        v34 = v5;
        v7 = (const char *)&unk_2B461B;
        v33 = a1;
LABEL_11:
        v8 = a3 > a2;
        v35[1] = v6;
        if ( a3 <= a2 )
          v8 = a4 > a2;
        v35[0] = v7;
        if ( v8 )
        {
          v41 = 3;
          v43 = 3;
          if ( a3 > a2 )
            a4 = a3;
          v42 = &v44;
          v39[0] = 0;
          v38[0] = a4;
          v40 = &off_2E4490;
          v49 = (int (__fastcall *)(int, int *))sub_25F208;
          v47 = sub_25F208;
          v48 = (char **)v35;
          v46 = &v33;
          v45 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v9 = v38;
          goto LABEL_18;
        }
        if ( a3 > a4 )
        {
          v41 = 4;
          v43 = 4;
          v42 = &v44;
          v51 = sub_25F208;
          v39[0] = 0;
          v50 = (char **)v35;
          v49 = (int (__fastcall *)(int, int *))sub_25F208;
          v48 = &v33;
          v47 = (int (*)())core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v45 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v46 = &v32;
          v44 = &v31;
          v40 = (char **)&off_2E44A8;
          core::panicking::panic_fmt((int)v39, a5);
        }
        if ( !a3 )
          goto LABEL_27;
        if ( a3 >= a2 )
        {
          if ( a3 == a2 )
            a3 = a4;
          v10 = a2;
          v36 = a3;
          if ( a3 >= a2 )
          {
LABEL_29:
            if ( !v10 )
              goto LABEL_57;
LABEL_53:
            if ( v10 >= a2 )
            {
              if ( v10 != a2 )
LABEL_55:
                core::str::slice_error_fail((int)a1);
            }
            else if ( a1[v10] <= -65 )
            {
              goto LABEL_55;
            }
LABEL_57:
            if ( v10 == a2 )
              goto LABEL_58;
            v22 = &a1[v10];
            v23 = *v22;
            v24 = (unsigned __int8)v23;
            if ( v23 <= -1 )
            {
              v26 = v23 & 0x1F;
              v27 = v22[1] & 0x3F;
              if ( v24 <= 0xDF )
              {
                v29 = v27 | (v26 << 6);
              }
              else
              {
                v28 = v22[2] & 0x3F | (v27 << 6);
                if ( v24 < 0xF0 )
                {
                  v29 = v28 | (v26 << 12);
                }
                else
                {
                  v29 = v22[3] & 0x3F | (v28 << 6) | ((v26 & 7) << 18);
                  if ( v29 == 1114112 )
LABEL_58:
                    core::panicking::panic((int)aCalledOptionUn_3, 43, a5);
                }
              }
              v25 = 1;
              v30 = v29 >= 0x80;
              if ( v29 >= 0x80 )
              {
                v25 = 2;
                v30 = v29 >= 0x800;
              }
              v37 = v29;
              if ( v30 )
              {
                v25 = 4;
                if ( v29 < 0x10000 )
                  v25 = 3;
              }
            }
            else
            {
              v37 = (unsigned __int8)v23;
              v25 = 1;
            }
            v40 = &off_2E44C8;
            v42 = &v44;
            v39[0] = 0;
            v38[1] = v25 + v10;
            v52 = v35;
            v50 = &v33;
            v38[0] = v10;
            v41 = 5;
            v43 = 5;
            v53 = sub_25F208;
            v51 = sub_25F208;
            v49 = sub_24471C;
            v48 = (char **)v38;
            v47 = (int (*)())<char as core::fmt::Debug>::fmt;
            v46 = &v37;
            v45 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v9 = &v36;
LABEL_18:
            v44 = v9;
            core::panicking::panic_fmt((int)v39, a5);
          }
LABEL_34:
          v11 = a3 - 3;
          v12 = a3 + 1;
          if ( a3 < 3 )
            v11 = 0;
          if ( v12 < v11 )
            core::slice::index::slice_index_order_fail();
          if ( v11 != v12 )
          {
            v13 = &a1[v11];
            v14 = &a1[a3];
            v6 = a1[a3];
            v15 = v12 - v11;
            if ( v6 <= -65 )
            {
              if ( v11 != a3 )
              {
                v17 = *(v14 - 1);
                v16 = v14 - 1;
                if ( v17 <= -65 )
                {
                  if ( v13 != v16 )
                  {
                    v19 = *(v16 - 1);
                    v18 = v16 - 1;
                    if ( v19 <= -65 )
                    {
                      if ( v13 != v18 )
                      {
                        v21 = *(v18 - 1);
                        v20 = v18 - 1;
                        if ( v21 <= -65 )
                        {
                          if ( v13 != v20 )
                            v6 = v15 - 5;
                        }
                        else
                        {
                          v6 = v15 - 4;
                        }
                      }
                    }
                    else
                    {
                      v6 = v15 - 3;
                    }
                  }
                }
                else
                {
                  v6 = v15 - 2;
                }
              }
            }
            else
            {
              v6 = v15 - 1;
            }
          }
          v10 = v6 + v11;
          if ( !(v6 + v11) )
            goto LABEL_57;
          goto LABEL_53;
        }
        v6 = a1[a3];
        if ( v6 >= -64 )
LABEL_27:
          a3 = a4;
        v10 = a2;
        v36 = a3;
        if ( a3 >= a2 )
          goto LABEL_29;
        goto LABEL_34;
      }
LABEL_23:
      core::str::slice_error_fail((int)a1);
    }
    if ( v5 != a2 )
      goto LABEL_23;
    v34 = v5;
    v7 = aLibraryCoreSrc;
  }
  v33 = a1;
  v6 = 0;
  goto LABEL_11;
}
