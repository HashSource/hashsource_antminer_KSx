source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_2200c = local_unnamed_addr global i32 67416
@global_var_22010 = local_unnamed_addr global i32 67416
@global_var_22014 = local_unnamed_addr global i32 67416
@global_var_22018 = local_unnamed_addr global i32 67416
@global_var_2201c = local_unnamed_addr global i32 67416
@global_var_22020 = local_unnamed_addr global i32 67416
@global_var_22024 = local_unnamed_addr global i32 67416
@global_var_22028 = local_unnamed_addr global i32 67416
@global_var_2202c = local_unnamed_addr global i32 67416
@global_var_22030 = local_unnamed_addr global i32 67416
@global_var_22034 = local_unnamed_addr global i32 67416
@global_var_22038 = local_unnamed_addr global i32 67416
@global_var_2203c = local_unnamed_addr global i32 67416
@global_var_22040 = local_unnamed_addr global i32 67416
@global_var_22044 = local_unnamed_addr global i32 67416
@global_var_22048 = local_unnamed_addr global i32 67416
@global_var_2204c = local_unnamed_addr global i32 67416
@global_var_22050 = local_unnamed_addr global i32 67416
@global_var_22054 = local_unnamed_addr global i32 67416
@global_var_22058 = local_unnamed_addr global i32 67416
@global_var_2205c = local_unnamed_addr global i32 67416
@global_var_22060 = local_unnamed_addr global i32 67416
@global_var_22064 = local_unnamed_addr global i32 67416
@global_var_22068 = local_unnamed_addr global i32 67416
@global_var_2206c = local_unnamed_addr global i32 67416
@global_var_22070 = local_unnamed_addr global i32 67416
@global_var_22074 = local_unnamed_addr global i32 67416
@global_var_22078 = local_unnamed_addr global i32 67416
@global_var_2207c = local_unnamed_addr global i32 67416
@global_var_11414 = constant [8 x i8] c"daemonc\00"
@global_var_1141c = constant [8 x i8] c"daemons\00"
@global_var_113e4 = constant [10 x i8] c"127.0.0.1\00"
@global_var_113f0 = constant [6 x i8] c"22322\00"
@global_var_11448 = constant [29 x i8] c"Will Listening To Port[%d]\0D\0A\00"
@global_var_11488 = constant [30 x i8] c"waiting for new connection...\00"
@global_var_114b8 = constant [25 x i8] c"A new connection occurs!\00"
@global_var_114d4 = constant [23 x i8] c"pthread_create error!\0A\00"
@global_var_114f8 = constant [18 x i8] c"Server shuts down\00"
@global_var_114a8 = constant [15 x i8] c"Accept error!\0A\00"
@global_var_1150c = constant [22 x i8] c"Cannot Find Command!\0D\00"
@global_var_11424 = constant [16 x i8] c"update-daemon.c\00"
@global_var_114ec = constant [10 x i8] c"ret != -1\00"
@global_var_10b18 = local_unnamed_addr constant i32 70436
@global_var_11324 = constant [14 x i8] c"ProcessServer\00"
@global_var_11434 = constant [20 x i8] c"sockfd_server != -1\00"
@global_var_11478 = constant [15 x i8] c"listen error!\0A\00"
@global_var_11468 = constant [13 x i8] c"bind error!\0A\00"
@global_var_10b68 = local_unnamed_addr constant i32 70820
@global_var_114a4 = constant i32 46
@global_var_10b6c = local_unnamed_addr constant i32 128
@global_var_10b5c = constant i32 -481165312
@global_var_11334 = constant [13 x i8] c"New Thread!\0D\00"
@global_var_11344 = constant [12 x i8] c"Recv:'%s'\0D\0A\00"
@global_var_10f24 = local_unnamed_addr constant [25 x i8] c"/usr/sbin/updateporc.sh \00"
@global_var_10f28 = local_unnamed_addr constant [21 x i8] c"/sbin/updateporc.sh \00"
@global_var_10f2c = local_unnamed_addr constant [17 x i8] c"n/updateporc.sh \00"
@global_var_10f30 = local_unnamed_addr constant [13 x i8] c"dateporc.sh \00"
@global_var_10f34 = local_unnamed_addr constant [9 x i8] c"porc.sh \00"
@global_var_10f38 = local_unnamed_addr constant [5 x i8] c".sh \00"
@global_var_113d4 = local_unnamed_addr constant [14 x i8] c"Come On WUHAN\00"
@global_var_113d8 = local_unnamed_addr constant [10 x i8] c" On WUHAN\00"
@global_var_113dc = local_unnamed_addr constant [6 x i8] c"WUHAN\00"
@global_var_11360 = constant [21 x i8] c"system status:[%d]\0D\0A\00"
@global_var_11378 = constant [26 x i8] c"Shell Exec Successfully!\0D\00"
@global_var_113b8 = constant [21 x i8] c"Other Exit Ret[%d]\0D\0A\00"
@global_var_113d0 = constant [4 x i8] c"6%d\00"
@global_var_11350 = constant [13 x i8] c"system err!\0D\00"
@global_var_11394 = constant [32 x i8] c"Shell Execute Failed, Ret[%d]\0D\0A\00"
@global_var_113b4 = constant [3 x i8] c"%d\00"
@global_var_113f8 = constant [12 x i8] c"socket err:\00"
@global_var_11404 = constant [13 x i8] c"connect err:\00"
@global_var_10f0c = local_unnamed_addr constant i32 69666
@global_var_11022 = constant i32 0
@global_var_10f10 = local_unnamed_addr constant i32 69656
@global_var_11018 = local_unnamed_addr constant i32 0
@global_var_21f08 = global i32 68569
@0 = external global i32
@global_var_22090 = local_unnamed_addr global %_IO_FILE* null
@global_var_10b44 = local_unnamed_addr constant void ()* inttoptr (i32 67784 to void ()*)
@global_var_10b48 = local_unnamed_addr constant void ()* inttoptr (i32 69337 to void ()*)
@global_var_10f3c = local_unnamed_addr constant i8 0
@global_var_113e0 = local_unnamed_addr constant i16 78

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_1074c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1074c:
  %0 = call i32 @function_10b4c(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i8* @function_1076c(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_1076c:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !2
  ret i8* %0, !insn.addr !2
}

define i32 @function_10778(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10778:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10784(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_10784:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_10790(i8* %s) local_unnamed_addr {
dec_label_pc_10790:
  call void @perror(i8* %s), !insn.addr !5
  ret void, !insn.addr !5
}

define i32 @function_1079c(i32 %fd, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_1079c:
  %0 = call i32 @accept(i32 %fd, %sockaddr* %addr, i32* %addr_len), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_107a8(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_107a8:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i8* @function_107b4(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_107b4:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_107c0(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_107c0:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_107cc(i8* %s) local_unnamed_addr {
dec_label_pc_107cc:
  %0 = call i32 @puts(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_107d8(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_107d8:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_107e4(i8* %command) local_unnamed_addr {
dec_label_pc_107e4:
  %0 = call i32 @system(i8* %command), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_107f0() local_unnamed_addr {
dec_label_pc_107f0:
  call void @__gmon_start__(), !insn.addr !13
  ret void, !insn.addr !13
}

define void @function_107fc(i32 %status) local_unnamed_addr {
dec_label_pc_107fc:
  call void @exit(i32 %status), !insn.addr !14
  ret void, !insn.addr !14
}

define i32 @function_10808(i8* %s) local_unnamed_addr {
dec_label_pc_10808:
  %0 = call i32 @strlen(i8* %s), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_10814(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10814:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32* @function_10820(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10820:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !17
  ret i32* %0, !insn.addr !17
}

define i32 @function_1082c(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_1082c:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define void @function_10838(i32* %retval) local_unnamed_addr {
dec_label_pc_10838:
  call void @pthread_exit(i32* %retval), !insn.addr !19
  ret void, !insn.addr !19
}

define i32 @function_10844(i32 %fd, i32 %how) local_unnamed_addr {
dec_label_pc_10844:
  %0 = call i32 @shutdown(i32 %fd, i32 %how), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_10850(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_10850:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_1085c(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1085c:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_10868(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_10868:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_10874(i8* %cp) local_unnamed_addr {
dec_label_pc_10874:
  %0 = call i32 @inet_addr(i8* %cp), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define void @function_10880() local_unnamed_addr {
dec_label_pc_10880:
  call void @abort(), !insn.addr !25
  ret void, !insn.addr !25
}

define i32 @function_1088c(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_1088c:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32 @function_10898(i32 %fd) local_unnamed_addr {
dec_label_pc_10898:
  %0 = call i32 @close(i32 %fd), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_108a4(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_108a4:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_108b0(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_108b0:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define void @function_108bc(i8* %assertion, i8* %file, i32 %line, i8* %function) local_unnamed_addr {
dec_label_pc_108bc:
  call void @__assert_fail(i8* %assertion, i8* %file, i32 %line, i8* %function), !insn.addr !30
  ret void, !insn.addr !30
}

define i32 @function_108c8(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_108c8:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !31
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-68 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i16, align 2
  %2 = load i32, i32* %0
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !32
  %4 = call i8* @strstr(i8* %3, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_11414, i32 0, i32 0)), !insn.addr !32
  %5 = icmp eq i8* %4, null, !insn.addr !33
  br i1 %5, label %dec_label_pc_108f0, label %dec_label_pc_10a54, !insn.addr !34

dec_label_pc_108f0:                               ; preds = %dec_label_pc_108c8
  %6 = call i8* @strstr(i8* %3, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_1141c, i32 0, i32 0)), !insn.addr !35
  %7 = icmp eq i8* %6, null, !insn.addr !36
  br i1 %7, label %dec_label_pc_10a7c, label %dec_label_pc_10908, !insn.addr !37

dec_label_pc_10908:                               ; preds = %dec_label_pc_108f0
  %8 = ptrtoint i8* %4 to i32, !insn.addr !32
  %9 = call i32 @socket(i32 2, i32 1, i32 %8), !insn.addr !38
  %10 = icmp eq i32 %9, -1, !insn.addr !39
  br i1 %10, label %dec_label_pc_10aac, label %dec_label_pc_10924, !insn.addr !40

dec_label_pc_10924:                               ; preds = %dec_label_pc_10908
  %11 = call double @__asm_vmov.i32(i32 0), !insn.addr !41
  store i16 2, i16* %stack_var_-56, align 2, !insn.addr !42
  call void @__asm_vst1.8(double %11, i32 %2), !insn.addr !43
  call void @__asm_vst1.8(double %11, i32 %1), !insn.addr !44
  %12 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_113e4, i32 0, i32 0)), !insn.addr !45
  %13 = call i32 @function_10bdc(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_113f0, i32 0, i32 0)), !insn.addr !46
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11448, i32 0, i32 0), i32 %13), !insn.addr !47
  %15 = bitcast i16* %stack_var_-56 to %sockaddr*, !insn.addr !48
  %16 = call i32 @bind(i32 %9, %sockaddr* nonnull %15, i32 16), !insn.addr !48
  %17 = icmp eq i32 %16, -1, !insn.addr !49
  br i1 %17, label %dec_label_pc_10af0, label %dec_label_pc_1098c, !insn.addr !50

dec_label_pc_1098c:                               ; preds = %dec_label_pc_10924
  %18 = call i32 @listen(i32 %9, i32 512), !insn.addr !51
  %19 = icmp eq i32 %18, -1, !insn.addr !52
  br i1 %19, label %dec_label_pc_10ac8, label %dec_label_pc_109c0.preheader, !insn.addr !53

dec_label_pc_109c0.preheader:                     ; preds = %dec_label_pc_1098c
  %20 = bitcast i32* %stack_var_-40 to %sockaddr*
  br label %dec_label_pc_109c0

dec_label_pc_109c0:                               ; preds = %dec_label_pc_109c0.backedge, %dec_label_pc_109c0.preheader
  %21 = call i32 @puts(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11488, i32 0, i32 0)), !insn.addr !54
  store i32 16, i32* %stack_var_-64, align 4, !insn.addr !55
  %22 = call i32 @accept(i32 %9, %sockaddr* nonnull %20, i32* nonnull %stack_var_-64), !insn.addr !56
  %23 = icmp eq i32 %22, -1, !insn.addr !57
  store i32 %22, i32* %stack_var_-68, align 4, !insn.addr !58
  br i1 %23, label %dec_label_pc_10a60, label %dec_label_pc_109ec, !insn.addr !59

dec_label_pc_109ec:                               ; preds = %dec_label_pc_109c0
  %24 = call i32 @puts(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_114b8, i32 0, i32 0)), !insn.addr !60
  %25 = call i32 @pthread_create(i32* nonnull %stack_var_-60, i32* null, i32* (i32*)* inttoptr (i32 68648 to i32* (i32*)*), i32* nonnull %stack_var_-68), !insn.addr !61
  %26 = icmp eq i32 %25, -1, !insn.addr !62
  br i1 %26, label %dec_label_pc_10a10, label %dec_label_pc_109c0.backedge, !insn.addr !63

dec_label_pc_10a10:                               ; preds = %dec_label_pc_109ec
  %27 = load %_IO_FILE*, %_IO_FILE** @global_var_22090, align 4, !insn.addr !64
  %28 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_114d4 to i32*), i32 1, i32 22, %_IO_FILE* %27), !insn.addr !65
  %29 = call i32 @shutdown(i32 %9, i32 1), !insn.addr !66
  %30 = icmp eq i32 %29, -1, !insn.addr !67
  br i1 %30, label %dec_label_pc_10a90, label %dec_label_pc_10a3c, !insn.addr !68

dec_label_pc_10a3c:                               ; preds = %dec_label_pc_10a10
  %31 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_114f8, i32 0, i32 0)), !insn.addr !69
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !70
  br label %dec_label_pc_10a4c, !insn.addr !70

dec_label_pc_10a4c:                               ; preds = %dec_label_pc_10a7c, %dec_label_pc_10a54, %dec_label_pc_10a3c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !71

dec_label_pc_10a54:                               ; preds = %dec_label_pc_108c8
  %32 = add i32 %arg2, 4, !insn.addr !72
  %33 = inttoptr i32 %32 to i32*, !insn.addr !72
  %34 = load i32, i32* %33, align 4, !insn.addr !72
  %35 = call i32 @function_10dbc(i32 %34), !insn.addr !73
  store i32 %35, i32* %r0.0.reg2mem, !insn.addr !74
  br label %dec_label_pc_10a4c, !insn.addr !74

dec_label_pc_10a60:                               ; preds = %dec_label_pc_109c0
  %36 = load %_IO_FILE*, %_IO_FILE** @global_var_22090, align 4, !insn.addr !75
  %37 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_114a8 to i32*), i32 1, i32 14, %_IO_FILE* %36), !insn.addr !76
  br label %dec_label_pc_109c0.backedge, !insn.addr !77

dec_label_pc_109c0.backedge:                      ; preds = %dec_label_pc_10a60, %dec_label_pc_109ec
  br label %dec_label_pc_109c0

dec_label_pc_10a7c:                               ; preds = %dec_label_pc_108f0
  %38 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_1150c, i32 0, i32 0)), !insn.addr !78
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !79
  br label %dec_label_pc_10a4c, !insn.addr !79

dec_label_pc_10a90:                               ; preds = %dec_label_pc_10a10
  call void @__assert_fail(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_114ec, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11424, i32 0, i32 0), i32 171, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11324, i32 0, i32 0)), !insn.addr !80
  br label %dec_label_pc_10aac, !insn.addr !80

dec_label_pc_10aac:                               ; preds = %dec_label_pc_10a90, %dec_label_pc_10908
  call void @__assert_fail(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_11434, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11424, i32 0, i32 0), i32 129, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11324, i32 0, i32 0)), !insn.addr !81
  br label %dec_label_pc_10ac8, !insn.addr !81

dec_label_pc_10ac8:                               ; preds = %dec_label_pc_10aac, %dec_label_pc_1098c
  %39 = load %_IO_FILE*, %_IO_FILE** @global_var_22090, align 4, !insn.addr !82
  %40 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_11478 to i32*), i32 1, i32 14, %_IO_FILE* %39), !insn.addr !83
  call void @exit(i32 1), !insn.addr !84
  unreachable, !insn.addr !84

dec_label_pc_10af0:                               ; preds = %dec_label_pc_10924
  %41 = load %_IO_FILE*, %_IO_FILE** @global_var_22090, align 4, !insn.addr !85
  %42 = call i32 @fwrite(i32* bitcast ([13 x i8]* @global_var_11468 to i32*), i32 1, i32 12, %_IO_FILE* %41), !insn.addr !86
  call void @exit(i32 1), !insn.addr !87
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !87

; uselistorder directives
  uselistorder i32 %22, { 1, 0 }
  uselistorder double %11, { 1, 0 }
  uselistorder i8* %4, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder void (i8*, i8*, i32, i8*)* @__assert_fail, { 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 3, 2, 1, 0, 4 }
  uselistorder %_IO_FILE** @global_var_22090, { 3, 2, 1, 0 }
  uselistorder i8* (i8*, i8*)* @strstr, { 1, 0, 2 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10b1c:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !88
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !88
  %2 = call i32 @__libc_start_main(i32 67784, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 69337 to void ()*), void ()* inttoptr (i32 67784 to void ()*), void ()* %1), !insn.addr !88
  call void @abort(), !insn.addr !89
  unreachable, !insn.addr !89
}

define i32 @function_10b40(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10b40:
  ret i32 %arg1, !insn.addr !90
}

define i32 @function_10b4c() local_unnamed_addr {
dec_label_pc_10b4c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10b5c to i32), i32 ptrtoint (i32* @global_var_114a4 to i32)), i32 128) to i32*), align 4, !insn.addr !91
  %3 = icmp eq i32 %2, 0, !insn.addr !92
  br i1 %3, label %4, label %dec_label_pc_10b64, !insn.addr !93

; <label>:4:                                      ; preds = %dec_label_pc_10b4c
  ret i32 %1, !insn.addr !93

dec_label_pc_10b64:                               ; preds = %dec_label_pc_10b4c
  call void @__gmon_start__(), !insn.addr !94
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !94
}

define i32 @function_10b70(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_10b70:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.01.reg2mem = alloca i1, !insn.addr !95
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_10b8c, !insn.addr !95

; <label>:9:                                      ; preds = %dec_label_pc_10b70
  ret i32 %arg1, !insn.addr !95

dec_label_pc_10b8c:                               ; preds = %dec_label_pc_10b70
  %10 = icmp eq i1 %5, %3, !insn.addr !96
  br i1 %10, label %dec_label_pc_10ba0, label %11, !insn.addr !96

; <label>:11:                                     ; preds = %dec_label_pc_10b8c
  call void @__asm_svclt(i32 18288), !insn.addr !96
  br label %dec_label_pc_10ba0, !insn.addr !96

dec_label_pc_10ba0:                               ; preds = %11, %dec_label_pc_10b8c
  br i1 %3, label %dec_label_pc_10bb8, label %12, !insn.addr !97

; <label>:12:                                     ; preds = %dec_label_pc_10ba0
  %13 = mul i32 %6, 1048577, !insn.addr !98
  %14 = mul i32 %6, 4194304, !insn.addr !97
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %13, %16, !insn.addr !97
  %18 = icmp slt i32 %17, 0, !insn.addr !97
  %19 = icmp eq i32 %17, 0, !insn.addr !97
  store i1 %18, i1* %cpsr_n.01.reg2mem, !insn.addr !99
  br i1 %19, label %20, label %dec_label_pc_10bb8, !insn.addr !99

; <label>:20:                                     ; preds = %12
  %21 = call i32 @unknown_240(), !insn.addr !99
  ret i32 %21, !insn.addr !99

dec_label_pc_10bb8:                               ; preds = %dec_label_pc_10ba0, %12
  %cpsr_n.01.reload = load i1, i1* %cpsr_n.01.reg2mem
  %22 = icmp eq i1 %cpsr_n.01.reload, %3, !insn.addr !100
  br i1 %22, label %24, label %23, !insn.addr !100

; <label>:23:                                     ; preds = %dec_label_pc_10bb8
  call void @__asm_svclt(i32 18288), !insn.addr !100
  br label %24, !insn.addr !100

; <label>:24:                                     ; preds = %dec_label_pc_10bb8, %23
  %25 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !101
  ret i32 %arg1, !insn.addr !101

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %3, { 2, 1, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %24, { 1, 0 }
  uselistorder label %dec_label_pc_10bb8, { 1, 0 }
}

define i32 @function_10bc4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10bc4:
  %r0.0.reg2mem = alloca i32, !insn.addr !102
  %0 = mul i32 %arg3, 262144, !insn.addr !102
  %1 = or i32 %0, 131072, !insn.addr !103
  %2 = inttoptr i32 %1 to i8*, !insn.addr !104
  %3 = load i8, i8* %2, align 131072, !insn.addr !104
  %4 = icmp eq i8 %3, 0, !insn.addr !105
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !105
  br i1 %4, label %dec_label_pc_10bce, label %dec_label_pc_10bd6, !insn.addr !105

dec_label_pc_10bce:                               ; preds = %dec_label_pc_10bc4
  %5 = call i32 @function_10b70(i32 %arg1, i32 %arg2, i32 %arg3, i8 0), !insn.addr !106
  store i8 1, i8* %2, align 131072, !insn.addr !107
  store i32 %5, i32* %r0.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_10bd6, !insn.addr !107

dec_label_pc_10bd6:                               ; preds = %dec_label_pc_10bc4, %dec_label_pc_10bce
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !108

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10bd6, { 1, 0 }
}

define i32 @function_10bd8() local_unnamed_addr {
dec_label_pc_10bd8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !109
}

define i32 @function_10bdc(i8* %arg1) local_unnamed_addr {
dec_label_pc_10bdc:
  %.lcssa.reg2mem = alloca i32, !insn.addr !110
  %r2.01.reg2mem = alloca i32, !insn.addr !110
  %.reg2mem = alloca i32, !insn.addr !110
  %0 = ptrtoint i8* %arg1 to i32
  %1 = call i32 @strlen(i8* %arg1), !insn.addr !111
  %2 = add i32 %0, -1
  %3 = add i32 %0, -2, !insn.addr !112
  %4 = add i32 %3, %1, !insn.addr !113
  %5 = icmp eq i32 %2, %4, !insn.addr !114
  store i32 -48, i32* %.reg2mem, !insn.addr !115
  store i32 %2, i32* %r2.01.reg2mem, !insn.addr !115
  store i32 -48, i32* %.lcssa.reg2mem, !insn.addr !115
  br i1 %5, label %dec_label_pc_10c1c, label %dec_label_pc_10c04, !insn.addr !115

dec_label_pc_10c04:                               ; preds = %dec_label_pc_10bdc, %dec_label_pc_10c04
  %r2.01.reload = load i32, i32* %r2.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %6 = add i32 %r2.01.reload, 1, !insn.addr !116
  %7 = inttoptr i32 %6 to i8*, !insn.addr !116
  %8 = load i8, i8* %7, align 1, !insn.addr !116
  %9 = zext i8 %8 to i32, !insn.addr !116
  %10 = add i32 %.reload, %9, !insn.addr !117
  %11 = mul i32 %10, 10, !insn.addr !118
  %12 = icmp eq i32 %6, %4, !insn.addr !114
  %13 = add i32 %11, -48, !insn.addr !119
  store i32 %13, i32* %.reg2mem, !insn.addr !115
  store i32 %6, i32* %r2.01.reg2mem, !insn.addr !115
  store i32 %13, i32* %.lcssa.reg2mem, !insn.addr !115
  br i1 %12, label %dec_label_pc_10c1c, label %dec_label_pc_10c04, !insn.addr !115

dec_label_pc_10c1c:                               ; preds = %dec_label_pc_10c04, %dec_label_pc_10bdc
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %14 = add i32 %1, %2, !insn.addr !120
  %15 = inttoptr i32 %14 to i8*, !insn.addr !120
  %16 = load i8, i8* %15, align 1, !insn.addr !120
  %17 = zext i8 %16 to i32, !insn.addr !120
  %18 = add i32 %.lcssa.reload, %17, !insn.addr !121
  ret i32 %18, !insn.addr !122

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %2, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 -48, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10c04, { 1, 0 }
}

define i32 @function_10c28(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c28:
  %r6.1.reg2mem = alloca i32, !insn.addr !123
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !123
  %r6.0.reg2mem = alloca i32, !insn.addr !123
  %stack_var_-1015 = alloca i32, align 4
  %stack_var_-1016 = alloca i8, align 1
  %stack_var_-1040 = alloca i8*, align 4
  %stack_var_-2064 = alloca i32, align 4
  %stack_var_-2060 = alloca i32, align 4
  %stack_var_-2080 = alloca i32, align 4
  %0 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11334, i32 0, i32 0)), !insn.addr !124
  store i32 0, i32* %stack_var_-2064, align 4, !insn.addr !125
  %1 = call i32* @memset(i32* nonnull %stack_var_-2060, i32 0, i32 1020), !insn.addr !126
  %2 = ptrtoint i32* %1 to i32, !insn.addr !126
  %3 = call i32 @read(i32 %2, i32* nonnull %stack_var_-2064, i32 1024), !insn.addr !127
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11344, i32 0, i32 0), i32* nonnull %stack_var_-2064), !insn.addr !128
  store i8* inttoptr (i32 1920169263 to i8*), i8** %stack_var_-1040, align 4, !insn.addr !129
  store i8 0, i8* %stack_var_-1016, align 1, !insn.addr !130
  %5 = call i32* @memset(i32* nonnull %stack_var_-1015, i32 0, i32 999), !insn.addr !131
  %6 = bitcast i32* %stack_var_-2064 to i8*, !insn.addr !132
  %7 = call i8* @strcpy(i8* nonnull %stack_var_-1016, i8* nonnull %6), !insn.addr !132
  store i32 1701670723, i32* %stack_var_-2080, align 4, !insn.addr !133
  %8 = bitcast i8** %stack_var_-1040 to i8*, !insn.addr !134
  %9 = call i32 @system(i8* nonnull %8), !insn.addr !134
  %10 = icmp eq i32 %9, -1, !insn.addr !135
  br i1 %10, label %dec_label_pc_10d78, label %dec_label_pc_10ce8, !insn.addr !136

dec_label_pc_10ce8:                               ; preds = %dec_label_pc_10c28
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_11360, i32 0, i32 0), i32 %9), !insn.addr !137
  %12 = urem i32 %9, 128, !insn.addr !138
  %13 = icmp eq i32 %12, 0, !insn.addr !138
  %14 = call i32 @__asm_ubfx(i32 %9, i32 8, i32 8), !insn.addr !139
  br i1 %13, label %dec_label_pc_10d08, label %dec_label_pc_10ce8.dec_label_pc_10d50_crit_edge, !insn.addr !140

dec_label_pc_10ce8.dec_label_pc_10d50_crit_edge:  ; preds = %dec_label_pc_10ce8
  %.pre = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !141
  store i8* %.pre, i8** %.pre-phi.reg2mem
  store i32 %14, i32* %r6.1.reg2mem
  br label %dec_label_pc_10d50

dec_label_pc_10d08:                               ; preds = %dec_label_pc_10ce8
  %15 = icmp eq i32 %14, 0, !insn.addr !142
  br i1 %15, label %dec_label_pc_10d10, label %dec_label_pc_10d94, !insn.addr !143

dec_label_pc_10d10:                               ; preds = %dec_label_pc_10d08
  %16 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_11378, i32 0, i32 0)), !insn.addr !144
  store i32 3158066, i32* %stack_var_-2080, align 4, !insn.addr !145
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_10d28, !insn.addr !145

dec_label_pc_10d28:                               ; preds = %dec_label_pc_10d94, %dec_label_pc_10d78, %dec_label_pc_10d50, %dec_label_pc_10d10
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %17 = bitcast i32* %stack_var_-2080 to i8*
  %18 = call i32 @strlen(i8* nonnull %17), !insn.addr !146
  %19 = add i32 %18, 1, !insn.addr !147
  %20 = call i32 @write(i32 %2, i32* nonnull %stack_var_-2080, i32 %19), !insn.addr !148
  %21 = call i32 @close(i32 %2), !insn.addr !149
  call void @pthread_exit(i32* null), !insn.addr !150
  store i8* %17, i8** %.pre-phi.reg2mem, !insn.addr !150
  store i32 %r6.0.reload, i32* %r6.1.reg2mem, !insn.addr !150
  br label %dec_label_pc_10d50, !insn.addr !150

dec_label_pc_10d50:                               ; preds = %dec_label_pc_10ce8.dec_label_pc_10d50_crit_edge, %dec_label_pc_10d28
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_113b8, i32 0, i32 0), i32 %r6.1.reload), !insn.addr !151
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %.pre-phi.reload, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_113d0, i32 0, i32 0), i32 %r6.1.reload), !insn.addr !141
  store i32 %r6.1.reload, i32* %r6.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_10d28, !insn.addr !152

dec_label_pc_10d78:                               ; preds = %dec_label_pc_10c28
  %24 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11350, i32 0, i32 0)), !insn.addr !153
  store i32 3158069, i32* %stack_var_-2080, align 4, !insn.addr !154
  br label %dec_label_pc_10d28, !insn.addr !155

dec_label_pc_10d94:                               ; preds = %dec_label_pc_10d08
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_11394, i32 0, i32 0), i32 %14), !insn.addr !156
  %26 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !157
  %27 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %26, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_113b4, i32 0, i32 0), i32 %14), !insn.addr !157
  store i32 %14, i32* %r6.0.reg2mem, !insn.addr !158
  br label %dec_label_pc_10d28, !insn.addr !158

; uselistorder directives
  uselistorder i32 %r6.1.reload, { 2, 0, 1 }
  uselistorder i32 %14, { 1, 3, 2, 4, 0 }
  uselistorder i32 %9, { 1, 0, 2, 3 }
  uselistorder i32 %2, { 1, 0, 2 }
  uselistorder i32* %stack_var_-2080, { 1, 4, 2, 3, 5, 0, 6 }
  uselistorder i32* %stack_var_-2064, { 1, 0, 2, 3 }
  uselistorder i8** %stack_var_-1040, { 1, 0 }
  uselistorder i8* %stack_var_-1016, { 1, 0 }
  uselistorder i32* %r6.0.reg2mem, { 1, 3, 0, 2 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (i8*)* @puts, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder label %dec_label_pc_10d50, { 1, 0 }
}

define i32 @function_10dbc(i32 %arg1) local_unnamed_addr {
dec_label_pc_10dbc:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !159
  %stack_var_-1040 = alloca i32, align 4
  %stack_var_-1036 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-1056 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %3 = icmp eq i32 %arg1, 0, !insn.addr !160
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !161
  br i1 %3, label %dec_label_pc_10ea0, label %dec_label_pc_10dcc, !insn.addr !161

dec_label_pc_10dcc:                               ; preds = %dec_label_pc_10dbc
  %4 = call double @__asm_vmov.i32(i32 0), !insn.addr !162
  call void @__asm_vst1.8(double %4, i32 %2), !insn.addr !163
  store i32 2, i32* %stack_var_-1056, align 4, !insn.addr !164
  call void @__asm_vst1.8(double %4, i32 %1), !insn.addr !165
  %5 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_113e4, i32 0, i32 0)), !insn.addr !166
  %6 = call i32 @function_10bdc(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_113f0, i32 0, i32 0)), !insn.addr !167
  %7 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !168
  %8 = icmp slt i32 %7, 0, !insn.addr !169
  br i1 %8, label %dec_label_pc_10eb0, label %dec_label_pc_10e20, !insn.addr !170

dec_label_pc_10e20:                               ; preds = %dec_label_pc_10dcc
  %9 = bitcast i32* %stack_var_-1056 to %sockaddr*, !insn.addr !171
  %10 = call i32 @connect(i32 %7, %sockaddr* nonnull %9, i32 16), !insn.addr !171
  %11 = icmp slt i32 %10, 0, !insn.addr !172
  br i1 %11, label %dec_label_pc_10ec4, label %dec_label_pc_10e34, !insn.addr !173

dec_label_pc_10e34:                               ; preds = %dec_label_pc_10e20
  %12 = inttoptr i32 %arg1 to i8*, !insn.addr !174
  %13 = call i32 @strlen(i8* %12), !insn.addr !174
  %14 = add i32 %13, 1, !insn.addr !175
  %15 = inttoptr i32 %arg1 to i32*, !insn.addr !176
  %16 = call i32 @send(i32 %7, i32* %15, i32 %14, i32 0), !insn.addr !176
  store i32 0, i32* %stack_var_-1040, align 4, !insn.addr !177
  %17 = call i32* @memset(i32* nonnull %stack_var_-1036, i32 0, i32 1020), !insn.addr !178
  %18 = call i32 @recv(i32 %7, i32* nonnull %stack_var_-1040, i32 1024, i32 0), !insn.addr !179
  %19 = icmp slt i32 %18, 1, !insn.addr !180
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !180
  br i1 %19, label %dec_label_pc_10ea0, label %dec_label_pc_10e84, !insn.addr !180

dec_label_pc_10e84:                               ; preds = %dec_label_pc_10e34
  %20 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !181
  %21 = add i32 %20, -1024, !insn.addr !182
  %22 = add i32 %21, %18, !insn.addr !183
  %23 = inttoptr i32 %22 to i8*, !insn.addr !183
  store i8 0, i8* %23, align 1, !insn.addr !183
  %24 = bitcast i32* %stack_var_-1040 to i8*, !insn.addr !184
  %25 = call i32 @function_10bdc(i8* nonnull %24), !insn.addr !184
  %26 = icmp eq i32 %25, 200, !insn.addr !185
  %spec.select = select i1 %26, i32 0, i32 %25
  ret i32 %spec.select

dec_label_pc_10ea0:                               ; preds = %dec_label_pc_10dbc, %dec_label_pc_10e34, %dec_label_pc_10ec4, %dec_label_pc_10eb0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !186

dec_label_pc_10eb0:                               ; preds = %dec_label_pc_10dcc
  call void @perror(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_113f8, i32 0, i32 0)), !insn.addr !187
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !188
  br label %dec_label_pc_10ea0, !insn.addr !188

dec_label_pc_10ec4:                               ; preds = %dec_label_pc_10e20
  call void @perror(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11404, i32 0, i32 0)), !insn.addr !189
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !190
  br label %dec_label_pc_10ea0, !insn.addr !190

; uselistorder directives
  uselistorder i32 %7, { 1, 0, 2, 3 }
  uselistorder double %4, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 -1, { 0, 2, 3, 1, 4, 5, 6, 7, 8, 9 }
  uselistorder void (i8*)* @perror, { 1, 0, 2 }
  uselistorder i8 0, { 1, 2, 0, 3, 4 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 0, 2, 1, 3 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, i32)* @socket, { 1, 0, 2 }
  uselistorder i32 (i8*)* @function_10bdc, { 2, 1, 0 }
  uselistorder i32 (i8*)* @inet_addr, { 1, 0, 2 }
  uselistorder i32 -3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10ea0, { 2, 3, 1, 0 }
}

define i32 @function_10ed8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10ed8:
  %0 = call i32 @function_1074c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !191
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint (i32* @global_var_11022 to i32), i32 69352), i32 ptrtoint (i32* @global_var_21f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !192

; uselistorder directives
  uselistorder i32 2, { 0, 2, 1, 3 }
  uselistorder i32 0, { 8, 11, 12, 9, 10, 3, 53, 54, 56, 55, 67, 68, 57, 69, 70, 15, 16, 17, 18, 13, 14, 19, 20, 21, 22, 0, 23, 24, 63, 64, 25, 26, 58, 27, 28, 59, 60, 29, 30, 65, 66, 2, 72, 33, 34, 35, 36, 37, 38, 39, 40, 31, 32, 1, 41, 42, 4, 5, 6, 7, 43, 44, 45, 46, 47, 48, 71, 49, 50, 51, 52, 61, 62 }
}

define i32 @function_10f14() local_unnamed_addr {
dec_label_pc_10f14:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !193

; uselistorder directives
  uselistorder i32 1, { 5, 19, 46, 22, 34, 33, 32, 31, 8, 4, 45, 38, 37, 36, 21, 20, 35, 11, 10, 9, 47, 14, 13, 12, 3, 15, 18, 16, 7, 6, 2, 1, 39, 23, 24, 25, 26, 27, 28, 29, 30, 44, 43, 42, 41, 40, 17, 0 }
}

define i32 @function_10f18(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10f18:
  ret i32 %arg1, !insn.addr !194
}

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @accept(i32, %sockaddr*, i32*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @pthread_create(i32*, i32*, i32* (i32*)*, i32*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @system(i8*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare void @pthread_exit(i32*) local_unnamed_addr

declare i32 @shutdown(i32, i32) local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @inet_addr(i8*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare void @__assert_fail(i8*, i8*, i32, i8*) local_unnamed_addr

declare double @__asm_vmov.i32(i32) local_unnamed_addr

declare void @__asm_vst1.8(double, i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i32) local_unnamed_addr

!0 = !{i64 67408}
!1 = !{i64 67412}
!2 = !{i64 67444}
!3 = !{i64 67456}
!4 = !{i64 67468}
!5 = !{i64 67480}
!6 = !{i64 67492}
!7 = !{i64 67504}
!8 = !{i64 67516}
!9 = !{i64 67528}
!10 = !{i64 67540}
!11 = !{i64 67552}
!12 = !{i64 67564}
!13 = !{i64 67576}
!14 = !{i64 67588}
!15 = !{i64 67600}
!16 = !{i64 67612}
!17 = !{i64 67624}
!18 = !{i64 67636}
!19 = !{i64 67648}
!20 = !{i64 67660}
!21 = !{i64 67672}
!22 = !{i64 67684}
!23 = !{i64 67696}
!24 = !{i64 67708}
!25 = !{i64 67720}
!26 = !{i64 67732}
!27 = !{i64 67744}
!28 = !{i64 67756}
!29 = !{i64 67768}
!30 = !{i64 67780}
!31 = !{i64 67784}
!32 = !{i64 67812}
!33 = !{i64 67816}
!34 = !{i64 67820}
!35 = !{i64 67836}
!36 = !{i64 67840}
!37 = !{i64 67844}
!38 = !{i64 67860}
!39 = !{i64 67864}
!40 = !{i64 67872}
!41 = !{i64 67876}
!42 = !{i64 67888}
!43 = !{i64 67900}
!44 = !{i64 67908}
!45 = !{i64 67912}
!46 = !{i64 67928}
!47 = !{i64 67948}
!48 = !{i64 67968}
!49 = !{i64 67972}
!50 = !{i64 67976}
!51 = !{i64 67988}
!52 = !{i64 67992}
!53 = !{i64 67996}
!54 = !{i64 68036}
!55 = !{i64 68056}
!56 = !{i64 68060}
!57 = !{i64 68064}
!58 = !{i64 68068}
!59 = !{i64 68072}
!60 = !{i64 68080}
!61 = !{i64 68100}
!62 = !{i64 68104}
!63 = !{i64 68108}
!64 = !{i64 68112}
!65 = !{i64 68132}
!66 = !{i64 68144}
!67 = !{i64 68148}
!68 = !{i64 68152}
!69 = !{i64 68164}
!70 = !{i64 68168}
!71 = !{i64 68176}
!72 = !{i64 68180}
!73 = !{i64 68184}
!74 = !{i64 68188}
!75 = !{i64 68196}
!76 = !{i64 68212}
!77 = !{i64 68216}
!78 = !{i64 68228}
!79 = !{i64 68236}
!80 = !{i64 68264}
!81 = !{i64 68292}
!82 = !{i64 68312}
!83 = !{i64 68324}
!84 = !{i64 68332}
!85 = !{i64 68352}
!86 = !{i64 68364}
!87 = !{i64 68372}
!88 = !{i64 68408}
!89 = !{i64 68412}
!90 = !{i64 68418}
!91 = !{i64 68440}
!92 = !{i64 68444}
!93 = !{i64 68448}
!94 = !{i64 68452}
!95 = !{i64 68464}
!96 = !{i64 68496}
!97 = !{i64 68520}
!98 = !{i64 68516}
!99 = !{i64 68528}
!100 = !{i64 68540}
!101 = !{i64 68544}
!102 = !{i64 68548}
!103 = !{i64 68550}
!104 = !{i64 68554}
!105 = !{i64 68556}
!106 = !{i64 68558}
!107 = !{i64 68564}
!108 = !{i64 68566}
!109 = !{i64 68568}
!110 = !{i64 68572}
!111 = !{i64 68580}
!112 = !{i64 68584}
!113 = !{i64 68604}
!114 = !{i64 68624}
!115 = !{i64 68632}
!116 = !{i64 68612}
!117 = !{i64 68616}
!118 = !{i64 68620}
!119 = !{i64 68628}
!120 = !{i64 68636}
!121 = !{i64 68640}
!122 = !{i64 68644}
!123 = !{i64 68648}
!124 = !{i64 68672}
!125 = !{i64 68688}
!126 = !{i64 68692}
!127 = !{i64 68712}
!128 = !{i64 68728}
!129 = !{i64 68748}
!130 = !{i64 68764}
!131 = !{i64 68780}
!132 = !{i64 68796}
!133 = !{i64 68816}
!134 = !{i64 68828}
!135 = !{i64 68832}
!136 = !{i64 68836}
!137 = !{i64 68856}
!138 = !{i64 68860}
!139 = !{i64 68864}
!140 = !{i64 68868}
!141 = !{i64 68976}
!142 = !{i64 68872}
!143 = !{i64 68876}
!144 = !{i64 68888}
!145 = !{i64 68900}
!146 = !{i64 68908}
!147 = !{i64 68916}
!148 = !{i64 68924}
!149 = !{i64 68932}
!150 = !{i64 68940}
!151 = !{i64 68956}
!152 = !{i64 68980}
!153 = !{i64 68992}
!154 = !{i64 69004}
!155 = !{i64 69008}
!156 = !{i64 69024}
!157 = !{i64 69044}
!158 = !{i64 69048}
!159 = !{i64 69052}
!160 = !{i64 69056}
!161 = !{i64 69064}
!162 = !{i64 69068}
!163 = !{i64 69092}
!164 = !{i64 69096}
!165 = !{i64 69100}
!166 = !{i64 69104}
!167 = !{i64 69120}
!168 = !{i64 69140}
!169 = !{i64 69144}
!170 = !{i64 69148}
!171 = !{i64 69160}
!172 = !{i64 69164}
!173 = !{i64 69168}
!174 = !{i64 69180}
!175 = !{i64 69192}
!176 = !{i64 69200}
!177 = !{i64 69216}
!178 = !{i64 69220}
!179 = !{i64 69240}
!180 = !{i64 69248}
!181 = !{i64 69252}
!182 = !{i64 69256}
!183 = !{i64 69264}
!184 = !{i64 69268}
!185 = !{i64 69272}
!186 = !{i64 69284}
!187 = !{i64 69304}
!188 = !{i64 69312}
!189 = !{i64 69324}
!190 = !{i64 69332}
!191 = !{i64 69352}
!192 = !{i64 69384}
!193 = !{i64 69396}
!194 = !{i64 69404}
