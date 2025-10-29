_DWORD *__fastcall miniz_oxide::inflate::stream::InflateState::new_boxed_with_window_bits(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r6

  v2 = (_DWORD *)_rust_alloc(0xAAF4u);
  if ( !v2 )
    alloc::alloc::handle_alloc_error();
  v3 = v2;
  v4 = v2 + 10938;
  v2[10938] = 0;
  v2[10939] = 0;
  memset(v2, 0, 0xAAE6u);
  *((_WORD *)v4 + 5) = 1;
  *((_BYTE *)v4 + 8) = 1;
  *((_BYTE *)v4 + 9) = 2 * (a1 < 1);
  return v3;
}
