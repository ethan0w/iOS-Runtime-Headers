/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem  {
    AVChapterMetadataItemInternal *_privChapter;
}


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)extraAttributes;
- (id)commonKey;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)key;
- (id)locale;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)value;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)keySpace;
- (long)_chapterIndex;
- (long)_chapterGroupIndex;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (void)_takeValueFrom:(id)arg1;
- (int)_valueStatus;
- (void)_setValueStatus:(int)arg1 figErrorCode:(long)arg2;
- (void)_ensureValueLoadedSync;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long)arg2 chapterIndex:(long)arg3 chapterType:(id)arg4 locale:(id)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
- (void)cancelLoading;

@end
