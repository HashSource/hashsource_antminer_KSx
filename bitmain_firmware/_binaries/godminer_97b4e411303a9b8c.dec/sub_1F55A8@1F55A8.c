void __fastcall sub_1F55A8(int **a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r5
  unsigned int v10; // r10
  int *v11; // lr
  int v12; // r0
  bool v13; // zf
  pid_t v14; // r0
  unsigned int v15; // r1
  int v16; // r4
  void *v17; // r4
  int v18; // r8
  _DWORD *v19; // r6
  int v20; // r5
  unsigned int v21; // r6
  unsigned int v22; // r2
  void *v23; // r4
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r4
  int v32; // r6
  int v33; // r6
  __pid_t v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r1
  unsigned int v37; // r1
  unsigned int v38; // r1
  ssize_t i; // r0
  int v40; // r7
  unsigned int v41; // r5
  int v42; // r0
  unsigned int v43; // r1
  unsigned int v44; // r2
  _DWORD *v45; // r9
  unsigned int v46; // r1
  unsigned int v47; // r2
  unsigned int v48; // r3
  int v49; // r0
  bool v50; // zf
  char v51; // r7
  _BOOL4 v52; // r0
  int (__fastcall *v53)(posix_spawn_file_actions_t *, int); // r1
  pid_t v54; // r11
  int v55; // r0
  int v56; // r6
  __int16 v57; // r7
  unsigned int *v58; // r1
  unsigned int *v59; // r10
  void **v60; // r3
  int v61; // r0
  unsigned int v62; // r0
  unsigned int v63; // r1
  int v64; // r4
  unsigned __int8 v65; // r7
  int *v66; // r6
  int v67; // r11
  unsigned int v68; // r0
  unsigned int v69; // r1
  int v70; // r3
  int v71; // r0
  int v72; // r1
  int v73; // r2
  unsigned int v74; // r0
  char **v75; // r1
  posix_spawn_file_actions_t *p_file_actions; // r2
  unsigned int v77; // r1
  int *v78; // r3
  unsigned int v79; // r1
  pid_t v80; // r0
  char **v81; // r1
  char **v82; // r0
  int (__fastcall *v83)(posix_spawn_file_actions_t *, int); // [sp+14h] [bp-2A0h]
  int v84; // [sp+18h] [bp-29Ch]
  int v85; // [sp+18h] [bp-29Ch]
  int v86; // [sp+18h] [bp-29Ch]
  int v87; // [sp+20h] [bp-294h]
  pid_t v88; // [sp+24h] [bp-290h]
  int v89; // [sp+24h] [bp-290h]
  int v91; // [sp+2Ch] [bp-288h]
  int v92; // [sp+30h] [bp-284h] BYREF
  void *ptr; // [sp+34h] [bp-280h]
  int v94; // [sp+38h] [bp-27Ch]
  int v95; // [sp+3Ch] [bp-278h]
  void *v96; // [sp+40h] [bp-274h] BYREF
  int v97; // [sp+48h] [bp-26Ch]
  int pgrp; // [sp+4Ch] [bp-268h]
  int v99; // [sp+50h] [bp-264h]
  unsigned int v100; // [sp+58h] [bp-25Ch]
  int fd; // [sp+5Ch] [bp-258h]
  unsigned int v102; // [sp+60h] [bp-254h]
  int v103; // [sp+64h] [bp-250h]
  unsigned int v104; // [sp+68h] [bp-24Ch]
  int v105; // [sp+6Ch] [bp-248h]
  unsigned int v106; // [sp+70h] [bp-244h]
  unsigned int v107; // [sp+74h] [bp-240h]
  unsigned int buf; // [sp+78h] [bp-23Ch] BYREF
  int v109; // [sp+7Ch] [bp-238h] BYREF
  int *v110; // [sp+80h] [bp-234h] BYREF
  __int64 v111; // [sp+84h] [bp-230h] BYREF
  int v112; // [sp+8Ch] [bp-228h]
  posix_spawnattr_t attr; // [sp+90h] [bp-224h] BYREF
  posix_spawn_file_actions_t file_actions; // [sp+1E4h] [bp-D0h] BYREF
  sigset_t set; // [sp+230h] [bp-84h] BYREF
  char v116[4]; // [sp+2B0h] [bp-4h] BYREF

  sub_1F0DD4((int)&v92, a2);
  v9 = *(unsigned __int8 *)(a2 + 125);
  if ( *(_BYTE *)(a2 + 125) )
  {
    *a1 = (int *)2;
    a1[1] = (int *)2;
    a1[2] = (int *)&off_2E0CC0;
    goto LABEL_25;
  }
  sub_1F19C4((int *)&attr.__flags, a2, a3, v8, a4);
  v10 = attr.__sd.__val[1];
  v11 = *(int **)&attr.__flags;
  if ( attr.__sd.__val[1] == 3 )
  {
    a1[2] = (int *)attr.__pgrp;
    *a1 = (int *)2;
    a1[1] = v11;
    goto LABEL_25;
  }
  v87 = v9;
  set.__val[0] = attr.__sd.__val[2];
  set.__val[1] = attr.__sd.__val[3];
  set.__val[2] = attr.__sd.__val[4];
  set.__val[3] = attr.__sd.__val[5];
  set.__val[4] = attr.__sd.__val[6];
  pgrp = attr.__pgrp;
  v97 = *(_DWORD *)&attr.__flags;
  v99 = attr.__sd.__val[0];
  v100 = attr.__sd.__val[1];
  fd = attr.__sd.__val[2];
  v102 = attr.__sd.__val[3];
  v103 = attr.__sd.__val[4];
  v104 = attr.__sd.__val[5];
  v105 = attr.__sd.__val[6];
  v12 = *(_DWORD *)(a2 + 72);
  v13 = v12 == 1;
  if ( v12 != 1 )
    v13 = *(_DWORD *)(a2 + 64) == 1;
  if ( v13 )
    goto LABEL_9;
  v23 = ptr;
  if ( *(unsigned __int8 *)(a2 + 13) | *(unsigned __int8 *)(a2 + 12) )
  {
    v24 = *(_DWORD *)(a2 + 36);
    v25 = *(_DWORD *)(a2 + 32);
    v26 = v24 - 1;
    if ( (unsigned int)(v24 - 1) >= 8 )
    {
      v28 = core::slice::memchr::memchr_aligned(47, v25);
    }
    else if ( v24 == 1 )
    {
LABEL_50:
      v28 = 0;
    }
    else
    {
      v27 = 0;
      while ( *(_BYTE *)(v25 + v27) != 47 )
      {
        if ( v26 == ++v27 )
          goto LABEL_50;
      }
      v28 = 1;
    }
    if ( v28 != 1 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(a2 + 120) )
    goto LABEL_9;
  v49 = *(_DWORD *)(a2 + 24);
  v50 = v49 == 0;
  if ( !v49 )
    v50 = *(_BYTE *)(a2 + 126) == 0;
  if ( !v50 )
    goto LABEL_9;
  sub_1EFB00((int *)&attr.__flags);
  if ( *(_DWORD *)&attr.__flags != 1 )
    goto LABEL_9;
  v51 = 0;
  v52 = attr.__pgrp < 2u;
  if ( attr.__pgrp == 2 )
    v52 = attr.__sd.__val[0] < 0x18;
  if ( v52 )
    goto LABEL_9;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v53 = (int (__fastcall *)(posix_spawn_file_actions_t *, int))&posix_spawn_file_actions_addchdir_np;
    if ( !&posix_spawn_file_actions_addchdir_np )
      goto LABEL_9;
    v51 = 1;
  }
  else
  {
    v53 = 0;
  }
  v85 = *(_DWORD *)(a2 + 16);
  v89 = *(_DWORD *)(a2 + 80);
  v112 = -1;
  v110 = 0;
  HIDWORD(v111) = 0;
  v83 = v53;
  v54 = *(_DWORD *)(a2 + 84);
  v55 = posix_spawnattr_init(&attr);
  if ( v55 )
  {
    v56 = v55;
LABEL_135:
    v64 = 0;
    v65 = 0;
LABEL_136:
    *a1 = (int *)2;
    a1[1] = (int *)(v65 | (v64 << 8));
    a1[2] = (int *)v56;
LABEL_11:
    v16 = 1;
    if ( v100 < 2 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v56 = posix_spawn_file_actions_init(&file_actions);
  if ( v56 )
  {
LABEL_133:
    posix_spawnattr_destroy(&attr);
    if ( v112 != -1 )
      close(v112);
    goto LABEL_135;
  }
  if ( v10 )
  {
    v56 = posix_spawn_file_actions_adddup2(&file_actions, fd, 0);
    if ( v56 )
      goto LABEL_132;
  }
  if ( v102 )
  {
    v56 = posix_spawn_file_actions_adddup2(&file_actions, v103, 1);
    if ( v56 )
      goto LABEL_132;
  }
  if ( v104 )
  {
    v56 = posix_spawn_file_actions_adddup2(&file_actions, v105, 2);
    if ( v56 )
      goto LABEL_132;
  }
  if ( (v51 & 1) != 0 )
  {
    v56 = v83(&file_actions, v85);
    if ( v56 )
      goto LABEL_132;
  }
  v57 = 0;
  if ( v89 )
  {
    v56 = posix_spawnattr_setpgroup(&attr, v54);
    if ( v56 )
      goto LABEL_132;
    v57 = 2;
  }
  if ( byte_30CCCD )
    goto LABEL_119;
  if ( sigemptyset(&set) == -1 || sigaddset(&set, 13) == -1 )
  {
    v56 = *_errno_location();
    goto LABEL_132;
  }
  v56 = posix_spawnattr_setsigdefault(&attr, &set);
  if ( v56 )
  {
LABEL_132:
    posix_spawn_file_actions_destroy(&file_actions);
    goto LABEL_133;
  }
  v57 |= 4u;
LABEL_119:
  v56 = posix_spawnattr_setflags(&attr, v57);
  if ( v56 )
    goto LABEL_132;
  sub_1EF7B4();
  v59 = v58;
  v60 = (void **)&environ;
  if ( v23 )
    v60 = &v96;
  v61 = posix_spawnp(
          (pid_t *)&v111 + 1,
          *(const char **)(a2 + 32),
          &file_actions,
          &attr,
          *(char *const **)(a2 + 104),
          (char *const *)*v60);
  if ( v61 )
  {
    v56 = v61;
    __dmb(0xBu);
    do
    {
      v62 = __ldrex(v59);
      v63 = v62 - 1;
    }
    while ( __strex(v62 - 1, v59) );
    if ( (v63 & 0xBFFFFFFF) == 0x80000000 )
      std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers(v59, v63);
    goto LABEL_132;
  }
  v65 = v111;
  v66 = v110;
  v67 = HIDWORD(v111);
  v86 = v112;
  v64 = v111 >> 8;
  __dmb(0xBu);
  do
  {
    v68 = __ldrex(v59);
    v69 = v68 - 1;
  }
  while ( __strex(v68 - 1, v59) );
  if ( (v69 & 0xBFFFFFFF) == 0x80000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers(v59, v69);
  posix_spawn_file_actions_destroy(&file_actions);
  posix_spawnattr_destroy(&attr);
  if ( v66 == (int *)2 )
  {
LABEL_9:
    sub_1F03EC((int)&attr);
    if ( *(_DWORD *)&attr.__flags )
    {
      v14 = attr.__pgrp;
      v15 = attr.__sd.__val[0];
      *a1 = (int *)2;
      a1[1] = (int *)v14;
      a1[2] = (int *)v15;
      goto LABEL_11;
    }
    v88 = attr.__pgrp;
    v21 = attr.__sd.__val[0];
    if ( (unsigned int)dword_30CCE4 <= 0x3FFFFFFF && (dword_30CCE4 & 0x3FFFFFFE) != 0x3FFFFFFE )
    {
      v22 = __ldrex((unsigned int *)&dword_30CCE4);
      if ( v22 == dword_30CCE4 )
      {
        if ( !__strex(dword_30CCE4 + 1, (unsigned int *)&dword_30CCE4) )
        {
          __dmb(0xBu);
          goto LABEL_53;
        }
      }
      else
      {
        __clrex();
      }
    }
    std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_30CCE4);
LABEL_53:
    v84 = v21;
    v29 = *(unsigned __int8 *)(a2 + 126);
    set.__val[0] = -1;
    if ( v29 && byte_2E8F60 )
    {
      *(_QWORD *)&attr.__sd.__val[6] = 17;
      *(_DWORD *)&attr.__flags = 4096;
      attr.__sd.__val[0] = (unsigned int)&set;
      memset(&attr.__sd.__val[1], 0, 20);
      attr.__pgrp = 0;
      memset(&attr.__sd.__val[8], 0, 0x30u);
      v30 = syscall(435, &attr, 88);
      if ( v30 != -1 )
      {
        v31 = v30;
        v32 = set.__val[0];
        goto LABEL_69;
      }
      v33 = *_errno_location();
      if ( v33 != 1 )
      {
        if ( v33 != 38 )
          goto LABEL_63;
        byte_2E8F60 = 0;
      }
    }
    v34 = fork();
    if ( v34 != -1 )
    {
      v31 = v34;
      v32 = set.__val[0];
LABEL_69:
      if ( !v31 )
      {
        do
          v77 = __ldrex((unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT);
        while ( __strex(v77 | 0x80000000, (unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT) );
        close(v88);
        *(_DWORD *)&attr.__flags = v100;
        attr.__pgrp = fd;
        attr.__sd.__val[0] = v102;
        attr.__sd.__val[1] = v103;
        attr.__sd.__val[2] = v104;
        attr.__sd.__val[3] = v105;
        v78 = &v92;
        if ( !ptr )
          v78 = 0;
        sub_1F63B0(&set, a2, &attr, v78);
        v79 = set.__val[1];
        v107 = set.__val[1];
        v106 = set.__val[0];
        if ( LOBYTE(set.__val[0]) )
          v79 = 22;
        buf = bswap32(v79);
        v109 = 1480937294;
        if ( write(v84, &buf, 8u) == -1 )
        {
          v80 = *_errno_location();
          *((_BYTE *)&attr.__flags + 3) = 0;
          *(__int16 *)((char *)&attr.__flags + 1) = 0;
          LOBYTE(attr.__flags) = 0;
          attr.__pgrp = v80;
          sub_1AEF8C((int)&attr);
          set.__val[3] = 2;
          set.__val[2] = (unsigned int)&off_2DF6F8;
          set.__val[4] = (unsigned int)&file_actions;
          set.__val[5] = 1;
          set.__val[0] = 0;
          file_actions.__used = (int)<core::fmt::Arguments as core::fmt::Display>::fmt;
          file_actions.__allocated = (int)&attr;
          attr.__sd.__val[1] = 1;
          attr.__sd.__val[0] = (unsigned int)&off_2E0D4C;
          attr.__sd.__val[3] = 0;
          attr.__sd.__val[2] = (unsigned int)aRustc9eb3afe9e;
          *(_DWORD *)&attr.__flags = 0;
          sub_1D7314(&v110, (int)v116, &set);
          if ( (unsigned __int8)v110 != 4 )
            sub_1AEF8C((int)&v110);
          std::sys::unix::abort_internal();
        }
        exit(1);
      }
      __dmb(0xBu);
      do
      {
        v37 = __ldrex((unsigned int *)&dword_30CCE4);
        v38 = v37 - 1;
      }
      while ( __strex(v38, (unsigned int *)&dword_30CCE4) );
      if ( (v38 & 0xBFFFFFFF) == 0x80000000 )
        std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_30CCE4, v38);
      close(v84);
      set.__val[3] = v32 | (v32 >> 31);
      set.__val[0] = 0;
      v109 = 0;
      buf = 0;
      set.__val[2] = v31;
      for ( i = read(v88, &buf, 8u); i == -1; i = read(v88, &buf, 8u) )
      {
        v40 = *_errno_location();
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(v40) != 35 )
        {
          LODWORD(v111) = v40;
          v110 = 0;
          sub_1F67E0(&attr, &set);
          if ( LOBYTE(attr.__flags) == 4 )
          {
            v74 = 1;
            attr.__sd.__val[1] = 1;
            v75 = &off_2E0CEC;
            attr.__sd.__val[0] = (unsigned int)&off_2E0CE4;
            *(_DWORD *)&attr.__flags = 0;
            file_actions.__used = (int)<std::io::error::Error as core::fmt::Debug>::fmt;
            file_actions.__allocated = (int)&v110;
            p_file_actions = &file_actions;
          }
          else
          {
            sub_1AEF8C((int)&attr);
            v75 = &off_2E0CD4;
            p_file_actions = (posix_spawn_file_actions_t *)aRustc9eb3afe9e;
            attr.__sd.__val[1] = 1;
            attr.__sd.__val[0] = (unsigned int)&off_2E0CCC;
            v74 = 0;
            *(_DWORD *)&attr.__flags = 0;
          }
          attr.__sd.__val[2] = (unsigned int)p_file_actions;
          attr.__sd.__val[3] = v74;
          core::panicking::panic_fmt((int)&attr, (int)v75);
        }
      }
      if ( !i )
      {
        v16 = 0;
        *(_DWORD *)&attr.__flags = set.__val[0];
        attr.__pgrp = set.__val[1];
        attr.__sd.__val[0] = set.__val[2];
        attr.__sd.__val[1] = set.__val[3];
        attr.__sd.__val[2] = v97;
        attr.__sd.__val[3] = pgrp;
        attr.__sd.__val[4] = v99;
        v43 = set.__val[1];
        v44 = set.__val[2];
        *a1 = (int *)set.__val[0];
        a1[1] = (int *)v43;
        a1[2] = (int *)v44;
        v45 = a1 + 3;
        v46 = attr.__sd.__val[2];
        v47 = attr.__sd.__val[3];
        v48 = attr.__sd.__val[4];
        *v45 = attr.__sd.__val[1];
        v45[1] = v46;
        v45[2] = v47;
        v45[3] = v48;
LABEL_84:
        v9 = v87;
        goto LABEL_85;
      }
      if ( i == 8 )
      {
        LODWORD(v111) = 4;
        v110 = &v109;
        if ( v109 != 1480937294 )
        {
          attr.__sd.__val[3] = 1;
          attr.__sd.__val[1] = 1;
          attr.__sd.__val[2] = (unsigned int)&file_actions;
          *(_DWORD *)&attr.__flags = 0;
          file_actions.__used = (int)sub_1B0908;
          file_actions.__allocated = (int)&buf;
          attr.__sd.__val[0] = (unsigned int)&off_2E0D24;
          sub_797F8((int)&v110, &attr);
        }
        v41 = buf;
        sub_1F67E0(&attr, &set);
        if ( LOBYTE(attr.__flags) == 4 )
        {
          v42 = set.__val[3];
          v16 = 1;
          v13 = set.__val[3] == -1;
          *a1 = (int *)2;
          a1[1] = 0;
          a1[2] = (int *)bswap32(v41);
          if ( !v13 )
            close(v42);
          goto LABEL_84;
        }
        sub_1AEF8C((int)&attr);
        v81 = &off_2E0D3C;
      }
      else
      {
        sub_1F67E0(&attr, &set);
        if ( LOBYTE(attr.__flags) == 4 )
        {
          v81 = &off_2E0D14;
          v82 = &off_2E0D0C;
          goto LABEL_166;
        }
        sub_1AEF8C((int)&attr);
        v81 = &off_2E0CFC;
      }
      v82 = &off_2E0CCC;
LABEL_166:
      attr.__sd.__val[0] = (unsigned int)v82;
      attr.__sd.__val[1] = 1;
      *(_DWORD *)&attr.__flags = 0;
      attr.__sd.__val[3] = 0;
      attr.__sd.__val[2] = (unsigned int)aRustc9eb3afe9e;
      core::panicking::panic_fmt((int)&attr, (int)v81);
    }
    v33 = *_errno_location();
LABEL_63:
    *a1 = (int *)2;
    a1[1] = 0;
    a1[2] = (int *)v33;
    __dmb(0xBu);
    do
    {
      v35 = __ldrex((unsigned int *)&dword_30CCE4);
      v36 = v35 - 1;
    }
    while ( __strex(v36, (unsigned int *)&dword_30CCE4) );
    if ( (v36 & 0xBFFFFFFF) == 0x80000000 )
      std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_30CCE4, v36);
    close(v84);
    v16 = 1;
LABEL_85:
    close(v88);
    if ( v100 < 2 )
      goto LABEL_13;
LABEL_12:
    close(fd);
    goto LABEL_13;
  }
  if ( v66 == (int *)3 )
  {
    v56 = v67;
    goto LABEL_136;
  }
  v70 = v65 | (v64 << 8);
  *a1 = v66;
  v71 = v97;
  v72 = pgrp;
  v73 = v99;
  v16 = 0;
  a1[1] = (int *)v70;
  a1[2] = (int *)v67;
  a1[3] = (int *)v86;
  a1[4] = (int *)v71;
  a1[5] = (int *)v72;
  a1[6] = (int *)v73;
  if ( v100 >= 2 )
    goto LABEL_12;
LABEL_13:
  if ( v102 >= 2 )
  {
    close(v103);
    if ( v104 < 2 )
    {
LABEL_15:
      if ( !v16 )
        goto LABEL_25;
      goto LABEL_19;
    }
  }
  else if ( v104 < 2 )
  {
    goto LABEL_15;
  }
  close(v105);
  if ( !v16 )
    goto LABEL_25;
LABEL_19:
  if ( v97 != -1 )
    close(v97);
  if ( pgrp != -1 )
    close(pgrp);
  if ( v99 != -1 )
    close(v99);
LABEL_25:
  v17 = ptr;
  if ( ptr )
  {
    v18 = v9;
    if ( v94 )
    {
      v19 = (char *)ptr + 4;
      v20 = 8 * v94;
      do
      {
        *(_BYTE *)*(v19 - 1) = 0;
        if ( *v19 )
          _rust_dealloc((void *)*(v19 - 1));
        v20 -= 8;
        v19 += 2;
      }
      while ( v20 );
    }
    if ( v92 )
      _rust_dealloc(v17);
    v9 = v18;
    if ( v95 )
      _rust_dealloc(v96);
  }
  if ( v9 )
  {
    if ( a3 == 3 )
      close(v91);
  }
}
