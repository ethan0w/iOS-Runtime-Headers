/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class NSMutableDictionary, NSLock;

@interface ASGeniusStatisticsConsumer : NSObject <ADDataStoreConsumer> {
    BOOL _canceled;
    NSLock *_lock;
    NSMutableDictionary *_statisticsByKey;
}


- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)distributionReceived:(struct { double x1; double x2; double x3; double x4; int x5; }*)arg1 withDaysSince1970:(int)arg2 forKey:(id)arg3;
- (void)scalarReceived:(long long)arg1 withDaysSince1970:(int)arg2 forKey:(id)arg3;
- (BOOL)shouldCancelQuery;
- (id)copyDictionaryRepresentation;

@end
