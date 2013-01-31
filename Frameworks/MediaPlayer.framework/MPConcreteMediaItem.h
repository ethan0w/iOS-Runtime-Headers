/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary, MPMediaLibrary;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying> {
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    NSMutableDictionary *_properties;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _cachesProperties;
}

+ (void)persistentID:(unsigned long long)arg1 didChange:(BOOL)arg2;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;

- (void)invalidate;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)delete;
- (BOOL)existsInLibrary;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
- (void)reallyIncrementPlayCount;
- (double)nominalHasBeenPlayedThreshold;
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(BOOL*)arg2;
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 cachesProperties:(BOOL)arg3;
- (void)clearBookmarkTime;
- (void)updateLastUsedDateToCurrentDate;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2;
- (void)markNominalAmountHasBeenPlayed;
- (BOOL)didSkipWithPlayedToTime:(double)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)mediaLibrary;
- (id)valuesForProperties:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;

@end
