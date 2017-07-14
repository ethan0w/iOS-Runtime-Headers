/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFFelicaStateEvent : NSObject {
    NSMutableDictionary * _stateEvents;
}

+ (id)_decodeShinkansenTrainDataWithBlock:(id)arg1 andBlock:(id)arg2;
+ (id)decodeEvent:(id)arg1;
+ (id)decodeEvent:(id)arg1 reverse:(BOOL)arg2;
+ (id)decodeLogEvent:(id)arg1;
+ (id)decodeProvider:(id)arg1 service:(id)arg2 blocks:(id)arg3;

- (void)addStateInfo:(id)arg1 appletAID:(id)arg2;
- (id)asDictionary;
- (void)dealloc;
- (id)init;
- (BOOL)isEmpty;

@end
