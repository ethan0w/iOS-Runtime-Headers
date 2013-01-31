/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSURL * alarmId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)createCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createCompleted;

- (void)setAlarmId:(id)arg1;
- (id)alarmId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
