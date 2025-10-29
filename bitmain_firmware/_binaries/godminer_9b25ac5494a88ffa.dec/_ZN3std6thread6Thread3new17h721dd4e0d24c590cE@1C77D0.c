int __fastcall std::thread::Thread::new(int a1, int a2)
{
  __int64 v4; // r0
  unsigned __int64 v5; // r6
  unsigned __int64 v6; // r4
  unsigned __int64 v7; // r2

  alloc::sync::arcinner_layout_for_value_layout(24, 8);
  v4 = alloc::sync::arcinner_layout_for_value_layout(24, 8);
  if ( (_DWORD)v4 )
    HIDWORD(v4) = _rust_alloc(v4);
  if ( !HIDWORD(v4) )
    alloc::alloc::handle_alloc_error();
  *(_DWORD *)HIDWORD(v4) = 1;
  *(_DWORD *)(HIDWORD(v4) + 4) = 1;
  *(_DWORD *)(HIDWORD(v4) + 8) = a1;
  *(_DWORD *)(HIDWORD(v4) + 12) = a2;
  v5 = __ldrexd(&qword_30AC80);
  __clrex();
  while ( 1 )
  {
    v6 = v5 + 1;
    if ( __CFADD__(v5 == -1, HIDWORD(v5)) )
      sub_79A10();
    v7 = __ldrexd(&qword_30AC80);
    if ( v7 != v5 )
    {
      __clrex();
      goto LABEL_6;
    }
    if ( !__strexd(v6, &qword_30AC80) )
      break;
LABEL_6:
    v5 = v7;
  }
  *(_DWORD *)(HIDWORD(v4) + 16) = v6;
  *(_QWORD *)(HIDWORD(v4) + 20) = HIDWORD(v6);
  return HIDWORD(v4);
}
