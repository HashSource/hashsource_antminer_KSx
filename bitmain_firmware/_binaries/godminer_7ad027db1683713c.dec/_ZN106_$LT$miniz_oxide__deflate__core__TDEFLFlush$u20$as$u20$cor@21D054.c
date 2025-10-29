int __fastcall <miniz_oxide::deflate::core::TDEFLFlush as core::convert::From<miniz_oxide::MZFlush>>::from(int result)
{
  if ( (unsigned int)(result - 2) >= 3 )
    return 0;
  return result;
}
