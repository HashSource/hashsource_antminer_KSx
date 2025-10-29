int __fastcall miniz_oxide::inflate::TINFLStatus::from_i32(int result)
{
  if ( (unsigned int)(result + 4) >= 7 )
    return 3;
  return result;
}
