// attributes: thunk
bool __fastcall <alloc::string::FromUtf8Error as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  return <core::str::error::Utf8Error as core::fmt::Display>::fmt(a1, a2);
}
