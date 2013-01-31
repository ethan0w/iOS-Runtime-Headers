/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSCalendar, NSString, NSDateComponents;

@interface BBBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSCoding> {
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    NSString *_calendarIdentifier;
    NSCalendar *_calendar;
    unsigned int _repeatInterval;
}

@property(copy) NSDateComponents * startComponents;
@property(copy) NSDateComponents * endComponents;
@property(copy) NSString * calendarIdentifier;
@property unsigned int repeatInterval;
@property(copy) NSCalendar * calendar;

+ (int)_dateComponentWithProvidedComponent:(int)arg1 andBaseComponent:(int)arg2;
+ (id)dateWithComponents:(id)arg1 immediatelyFollowingDate:(id)arg2 calendar:(id)arg3 repeatInterval:(unsigned int)arg4;
+ (id)dateWithComponents:(id)arg1 immediatelyPriorToDate:(id)arg2 calendar:(id)arg3 repeatInterval:(unsigned int)arg4;
+ (id)dateWithComponents:(id)arg1 closestToDate:(id)arg2 earlierThanDate:(BOOL)arg3 calendar:(id)arg4 repeatInterval:(unsigned int)arg5;
+ (id)adjustComponentsForRepeatInterval:(unsigned int)arg1 earlier:(BOOL)arg2;
+ (unsigned int)relevantUnitsForRepeatInterval:(unsigned int)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)nextTransitionDateAfterDate:(id)arg1;
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned int)arg4;
- (BOOL)containsDate:(id)arg1;
- (void)_synchronizeTimeZone;
- (id)endComponents;
- (id)startComponents;
- (id)_configuredCalendarWithIdentifier:(id)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setEndComponents:(id)arg1;
- (void)setStartComponents:(id)arg1;
- (id)calendarIdentifier;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (unsigned int)repeatInterval;
- (void)setRepeatInterval:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
