/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLogging : NSObject  {
}

+ (void)enableConsoleLoggingForLevel:(int)arg1;
+ (id)timeFormatter;
+ (id)dateFormatter;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(void*)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5;
+ (id)stringForDate;
+ (BOOL)loggingEnabledForLevel:(int)arg1;
+ (id)logFileDirectory;
+ (void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5 arguments:(void*)arg6;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4;


@end
