/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SATimerObject : SADomainObject  {
}

@property(copy) NSString * state;
@property(copy) NSNumber * timerValue;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;

- (id)state;
- (void)setTimerValue:(id)arg1;
- (id)timerValue;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setState:(id)arg1;
- (id)groupIdentifier;

@end
