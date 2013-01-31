/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUJetsamHelper : NSObject  {
}

+ (BOOL)handleMemoryWarning:(BOOL)arg1;
+ (BOOL)purgedEnoughMemoryToStayAlive:(struct malloc_statistics_t { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 isUrgent:(BOOL)arg2;
+ (void)purgeGlobals;
+ (struct malloc_statistics_t { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })markPreJetsamMemoryInfo;
+ (void)markPurgeableGlobalObject:(id*)arg1;
+ (void)unlock;
+ (void)lock;
+ (void)initialize;


@end
