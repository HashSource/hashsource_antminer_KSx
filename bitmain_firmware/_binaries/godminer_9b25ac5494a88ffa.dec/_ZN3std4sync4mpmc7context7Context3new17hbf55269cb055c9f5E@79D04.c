_DWORD *std::sync::mpmc::context::Context::new()
{
  int v0; // r0
  int v1; // r4
  _DWORD *result; // r0
  int v3; // [sp+10h] [bp-8h]

  v0 = sub_1E5C54();
  if ( !v0 )
    core::option::expect_failed(aUseOfStdThread, 94, &off_2DD788);
  v1 = v0;
  if ( !*(_BYTE *)_tls_get_addr(&dword_2E4488) )
    sub_1C6FFC(0);
  v3 = _tls_get_addr(&dword_2E4488) + 1;
  result = (_DWORD *)_rust_alloc(0x18u);
  if ( !result )
    alloc::alloc::handle_alloc_error(24);
  *result = 1;
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  result[4] = v3;
  result[5] = v1;
  return result;
}
