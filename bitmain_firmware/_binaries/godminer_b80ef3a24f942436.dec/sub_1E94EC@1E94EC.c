void sub_1E94EC()
{
  int v0; // r4

  if ( !(unsigned __int8)std::sys::unix::decode_error_kind(v0) )
    JUMPOUT(0x1E9500);
  JUMPOUT(0x1E94CC);
}
