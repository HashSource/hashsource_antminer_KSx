// attributes: thunk
unsigned int __fastcall <adler::Adler32 as core::hash::Hasher>::write(unsigned __int16 *a1, int a2, int a3)
{
  return adler::Adler32::write_slice(a1, a2, a3);
}
