int __fastcall std::rt::lang_start_internal(int a1, int a2, int a3, int a4, char a5)
{
  unsigned int v5; // r8
  unsigned int v8; // r0
  int v9; // r1
  struct sigaction *v10; // r4
  int v11; // r0
  int v12; // r5
  int v13; // r7
  int v14; // r6
  pthread_t v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r4
  int v19; // r0
  int v21; // r1
  char **v22; // r2
  const char *v23; // r0
  int v24; // r0
  char **v25; // r0
  int v26; // [sp+8h] [bp-DCh]
  struct sigaction *p_fds; // [sp+Ch] [bp-D8h] BYREF
  int (*v28)(); // [sp+10h] [bp-D4h]
  int v29; // [sp+14h] [bp-D0h]
  struct sigaction **p_p_fds; // [sp+1Ch] [bp-C8h] BYREF
  _BYTE v31[8]; // [sp+20h] [bp-C4h] BYREF
  void *stackaddr[2]; // [sp+28h] [bp-BCh] BYREF
  size_t stacksize[2]; // [sp+30h] [bp-B4h] BYREF
  struct sigaction fds; // [sp+38h] [bp-ACh] BYREF
  _DWORD v35[2]; // [sp+C4h] [bp-20h] BYREF
  char **v36; // [sp+CCh] [bp-18h]
  int v37; // [sp+D0h] [bp-14h]
  void **v38; // [sp+D4h] [bp-10h]
  int v39; // [sp+D8h] [bp-Ch]
  char v40; // [sp+DFh] [bp-5h] BYREF
  char *v41; // [sp+E0h] [bp-4h] BYREF

  fds.sa_mask.__val[0] = 0;
  fds.sa_handler = 0;
  fds.sa_mask.__val[4] = 0;
  fds.sa_mask.__val[2] = 0;
  fds.sa_mask.__val[3] = 2;
  fds.sa_mask.__val[1] = 1;
  do
  {
    if ( poll((struct pollfd *)&fds, 3u, 0) != -1 )
    {
      if ( (fds.sa_mask.__val[0] & 0x200000) != 0 && open64(aD_4, 2) == -1
        || (fds.sa_mask.__val[2] & 0x200000) != 0 && open64(aD_4, 2) == -1 )
      {
        goto LABEL_41;
      }
      if ( (fds.sa_mask.__val[4] & 0x200000) == 0 )
        goto LABEL_21;
LABEL_20:
      if ( open64(aD_4, 2) != -1 )
        goto LABEL_21;
LABEL_41:
      abort();
    }
    v8 = *_errno_location();
  }
  while ( v8 == 4 );
  if ( v8 > 0x16
    || ((1 << v8) & 0x401800) == 0
    || fcntl(0, 1) == -1 && *_errno_location() == 9 && open64(aD_4, 2) == -1
    || fcntl(1, 1) == -1 && *_errno_location() == 9 && open64(aD_4, 2) == -1 )
  {
    goto LABEL_41;
  }
  if ( fcntl(2, 1) == -1 && *_errno_location() == 9 )
    goto LABEL_20;
LABEL_21:
  v26 = a2;
  v9 = 1;
  switch ( a5 )
  {
    case 0:
      goto LABEL_25;
    case 1:
      byte_30ACAD = 1;
      goto LABEL_26;
    case 2:
      goto LABEL_24;
    case 3:
      v9 = 0;
LABEL_24:
      byte_30ACAD = 1;
LABEL_25:
      if ( signal(13, (__sighandler_t)v9) == (__sighandler_t)-1 )
      {
        v37 = 2;
        v36 = &off_2DD6F8;
        v38 = (void **)&p_fds;
        v39 = 1;
        v35[0] = 0;
        v28 = <core::fmt::Arguments as core::fmt::Display>::fmt;
        p_fds = &fds;
        fds.sa_mask.__val[2] = 1;
        fds.sa_mask.__val[1] = (unsigned int)&off_2DEC30;
        fds.sa_mask.__val[4] = 0;
        fds.sa_mask.__val[3] = (unsigned int)aRustc9eb3afe9e;
        fds.sa_handler = 0;
        sub_1D6424(stacksize, stackaddr, v35);
        sub_1AEE00((int)stacksize);
        goto LABEL_46;
      }
LABEL_26:
      v10 = &fds;
      memset(&fds, 0, sizeof(fds));
      sigaction(11, 0, &fds);
      if ( !fds.sa_handler )
      {
        fds.sa_flags = 134217732;
        fds.sa_handler = (__sighandler_t)sub_1F1C64;
        sigaction(11, &fds, 0);
        byte_30ACAC = 1;
      }
      sigaction(7, 0, &fds);
      if ( !fds.sa_handler )
      {
        fds.sa_flags = 134217732;
        fds.sa_handler = (__sighandler_t)sub_1F1C64;
        sigaction(7, &fds, 0);
        byte_30ACAC = 1;
      }
      dword_30ACBC = sub_1F1FBC();
      v11 = sysconf(30);
      dword_30ACC0 = v11;
      v12 = v11;
      if ( !v11 )
      {
        v21 = 32;
        v22 = &off_2DEB78;
        v23 = aAssertionFaile_3;
LABEL_51:
        core::panicking::panic((int)v23, v21, (int)v22);
      }
      v13 = v11;
      v14 = 0;
      memset(&fds, 0, 0x24u);
      v15 = pthread_self();
      if ( pthread_getattr_np(v15, &fds) )
        goto LABEL_37;
      stackaddr[0] = 0;
      stacksize[0] = 0;
      p_fds = (struct sigaction *)pthread_attr_getstack((const pthread_attr_t *)&fds, stackaddr, stacksize);
      if ( p_fds )
      {
        v25 = &off_2DEB58;
        goto LABEL_49;
      }
      v10 = (struct sigaction *)stackaddr[0];
      p_fds = (struct sigaction *)pthread_attr_destroy((pthread_attr_t *)&fds);
      if ( p_fds )
      {
        v25 = &off_2DEB68;
LABEL_49:
        v36 = 0;
        sub_796F4(0, (int)&p_fds, (int)"", v35, (int)v25);
      }
      sub_26C834(v10, v12);
      if ( v16 )
        v10 = (struct sigaction *)((char *)v10 + v12 - v16);
      v14 = 1;
      v5 = (unsigned int)v10 - v13;
LABEL_37:
      <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&p_fds);
      if ( v29 )
      {
        v37 = 2;
        v36 = &off_2DD6F8;
        v38 = stackaddr;
        p_p_fds = &p_fds;
        v39 = 1;
        v35[0] = 0;
        fds.sa_mask.__val[2] = 1;
        fds.sa_mask.__val[4] = 1;
        fds.sa_mask.__val[3] = (unsigned int)stacksize;
        stackaddr[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
        stackaddr[0] = &fds;
        fds.sa_mask.__val[1] = (unsigned int)&off_2DD708;
        fds.sa_handler = 0;
        stacksize[1] = (size_t)sub_1BCC4C;
        stacksize[0] = (size_t)&p_p_fds;
        sub_1D6424(v31, stackaddr, v35);
        v24 = v31[0];
        if ( v31[0] != 4 )
          sub_1AE09C((int)v31);
LABEL_46:
        std::sys::unix::abort_internal(v24);
      }
      v17 = std::thread::Thread::new(p_fds, v28);
      fds.sa_mask.__val[1] = (unsigned int)v10;
      fds.sa_mask.__val[0] = v5;
      fds.sa_handler = (__sighandler_t)v14;
      std::sys_common::thread_info::set(&fds, v17);
      v18 = (*(int (__fastcall **)(int))(v26 + 20))(a1);
      v19 = dword_30ACB0;
      __dmb(0xBu);
      if ( v19 != 4 )
      {
        v40 = 1;
        v41 = &v40;
        sub_7CC34(&v41);
      }
      return v18;
    default:
      v21 = 40;
      v22 = &off_2DEC20;
      v23 = aInternalErrorE_0;
      goto LABEL_51;
  }
}
