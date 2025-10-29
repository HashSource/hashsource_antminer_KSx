int std::thread::current()
{
  int result; // r0

  result = sub_1E6B44();
  if ( !result )
    core::option::expect_failed();
  return result;
}
