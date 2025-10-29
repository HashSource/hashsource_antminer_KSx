unsigned int __fastcall <std::process::CommandArgs as core::iter::traits::exact_size::ExactSizeIterator>::len(
        _DWORD *a1)
{
  return (unsigned int)(*a1 - a1[1]) >> 3;
}
