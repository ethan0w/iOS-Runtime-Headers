/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

@class NSMutableDictionary, NSLock;

@interface CLTMNotificationCenter : NSObject  {
    BOOL _enabled;
    BOOL _supported;
    NSMutableDictionary *_observers;
    int _lastlevel;
    NSLock *_lock;
}

@property(readonly) BOOL isSupported;
@property(readonly) BOOL isEnabled;
@property(readonly) int currentLevel;

+ (id)defaultCenter;
+ (void)initialize;

- (int)currentLevel;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1 forThermalLevel:(int)arg2;
- (int)addObserver:(id)arg1 withSelector:(SEL)arg2 forThermalLevel:(int)arg3;
- (void)_queryPrefsForCLTMStatus;
- (void)_handleNotification;
- (BOOL)isSupported;
- (BOOL)isEnabled;

@end
