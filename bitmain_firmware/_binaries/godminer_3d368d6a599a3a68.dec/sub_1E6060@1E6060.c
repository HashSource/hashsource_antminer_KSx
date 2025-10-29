void sub_1E6060()
{
  int v0; // r4

  if ( !(unsigned __int8)std::sys::unix::decode_error_kind(v0) )
    JUMPOUT(0x1E6074);
  JUMPOUT(0x1E6040);
}
