_DWORD *__fastcall std::thread::Thread::new(int a1, int a2)
{
  size_t v4; // r0
  _DWORD *v5; // r1
  unsigned __int64 v6; // r6
  unsigned __int64 v7; // r4
  unsigned __int64 v8; // r2

  alloc::sync::arcinner_layout_for_value_layout(0x18u, 8u);
  v4 = alloc::sync::arcinner_layout_for_value_layout(0x18u, 8u);
  if ( v4 )
    v5 = (_DWORD *)_rust_alloc(v4);
  if ( !v5 )
    alloc::alloc::handle_alloc_error();
  *v5 = 1;
  v5[1] = 1;
  v5[2] = a1;
  v5[3] = a2;
  v6 = __ldrexd(&qword_2E9628);
  __clrex();
  while ( 1 )
  {
    v7 = v6 + 1;
    if ( __CFADD__(v6 == -1, HIDWORD(v6)) )
      sub_780A8();
    v8 = __ldrexd(&qword_2E9628);
    if ( v8 != v6 )
    {
      __clrex();
      goto LABEL_6;
    }
    if ( !__strexd(v7, &qword_2E9628) )
      break;
LABEL_6:
    v6 = v8;
  }
  v5[4] = v7;
  v5[6] = 0;
  v5[5] = HIDWORD(v7);
  return v5;
}
