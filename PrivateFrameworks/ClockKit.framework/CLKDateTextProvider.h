/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKDateTextProvider : CLKTextProvider {
    BOOL  _allowsNarrowUnits;
    NSString * _alternateCalendarLocaleID;
    unsigned int  _calendarUnits;
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
    int  _formattingContext;
    BOOL  _shortUnits;
    NSArray * _templateSeries;
    NSTimeZone * _timeZone;
}

@property (nonatomic) BOOL allowsNarrowUnits;
@property (nonatomic, copy) NSString *alternateCalendarLocaleID;
@property (nonatomic) unsigned int calendarUnits;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) int formattingContext;
@property (nonatomic) BOOL shortUnits;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 units:(unsigned int)arg2;
+ (id)textProviderWithDate:(id)arg1 units:(unsigned int)arg2 timeZone:(id)arg3;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_completeDateTemplateSeries;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_partialDateTemplateSeriesForUnits:(unsigned int)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned int)arg1 withStyle:(id)arg2;
- (void)_validate;
- (BOOL)allowsNarrowUnits;
- (id)alternateCalendarLocaleID;
- (unsigned int)calendarUnits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)formattingContext;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAllowsNarrowUnits:(BOOL)arg1;
- (void)setAlternateCalendarLocaleID:(id)arg1;
- (void)setCalendarUnits:(unsigned int)arg1;
- (void)setDate:(id)arg1;
- (void)setFormattingContext:(int)arg1;
- (void)setShortUnits:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (BOOL)shortUnits;
- (id)timeZone;

@end
