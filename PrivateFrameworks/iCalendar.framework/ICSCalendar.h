/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSMutableSet, NSString, ICSColor, ICSDuration, NSMutableArray, NSMutableDictionary;

@interface ICSCalendar : ICSComponent  {
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableDictionary *_timezones;
    NSMutableArray *_parsingErrors;
}

@property(retain) NSString * calscale;
@property int method;
@property(retain) NSString * prodid;
@property(retain) NSString * version;
@property(retain) ICSDuration * x_apple_auto_refresh;
@property(retain) ICSColor * x_apple_calendar_color;
@property BOOL x_apple_ignore_on_restore;
@property(retain) NSString * x_wr_caldesc;
@property(retain) NSString * x_wr_calname;
@property(retain) NSString * x_wr_relcalid;
@property(retain) NSString * x_wr_timezone;
@property int x_calendarserver_access;

+ (id)ICSStringFromCalendarServerAccess:(int)arg1;
+ (int)calendarServerAccessFromICSString:(id)arg1;
+ (int)methodFromICSString:(id)arg1;
+ (void)setDefaultProdid:(id)arg1;
+ (id)defaultProdid;
+ (id)calendarWithKnownTimeZones;
+ (id)name;
+ (id)ICSStringFromMethod:(int)arg1;

- (void)fixEntities;
- (void)fixPropertiesInheritance;
- (void)fixComponent;
- (id)parsingErrors;
- (void)addParsingError:(id)arg1;
- (void)setComponents:(id)arg1 timeZones:(BOOL)arg2;
- (void)setX_wr_timezone:(id)arg1;
- (id)x_wr_timezone;
- (void)setX_wr_relcalid:(id)arg1;
- (id)x_wr_relcalid;
- (void)setX_wr_calname:(id)arg1;
- (id)x_wr_calname;
- (id)x_wr_caldesc;
- (void)setX_wr_caldesc:(id)arg1;
- (void)setX_apple_calendar_color:(id)arg1;
- (id)x_apple_calendar_color;
- (void)setX_apple_auto_refresh:(id)arg1;
- (id)x_apple_auto_refresh;
- (id)prodid;
- (id)calscale;
- (void)_addComponent:(id)arg1;
- (id)_timeZonesForComponents:(id)arg1 options:(int)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;
- (id)systemCalendarForDate:(id)arg1 options:(int)arg2;
- (id)timeZoneForKey:(id)arg1;
- (void)setCalscale:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)setMethod:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)setProdid:(id)arg1;
- (id)systemDateForDate:(id)arg1 options:(int)arg2;
- (id)systemTimeZoneForDate:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setComponents:(id)arg1;
- (id)version;
- (int)method;
- (id)_init;
- (void)setComponents:(id)arg1 options:(int)arg2;
- (id)componentOccurrencesForKey:(id)arg1;
- (id)componentForKey:(id)arg1;
- (id)componentKeys;

@end
