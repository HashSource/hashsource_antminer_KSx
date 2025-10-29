bool __fastcall <i64 as std::sys::unix::IsMinusOne>::is_minus_one(_DWORD *a1)
{
  return (*a1 & a1[1]) == -1;
}
