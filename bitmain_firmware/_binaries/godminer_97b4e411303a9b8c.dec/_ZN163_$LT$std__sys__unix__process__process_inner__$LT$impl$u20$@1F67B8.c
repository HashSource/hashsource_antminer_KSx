int __fastcall <std::sys::unix::process::process_inner::<impl std::sys::unix::process::process_common::Command>::do_exec::Reset as core::ops::drop::Drop>::drop(
        int *a1)
{
  int result; // r0

  result = *a1;
  environ = result;
  return result;
}
