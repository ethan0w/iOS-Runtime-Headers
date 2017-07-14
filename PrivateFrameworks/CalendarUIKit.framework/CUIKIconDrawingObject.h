/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKIconDrawingObject : NSObject {
    NSCalendar * _calendar;
    struct CGSize { 
        float width; 
        float height; 
    }  _canvasSize;
    id /* block */  _dateNameBlock;
    int  _dateNameFormatType;
    NSString * _dayNumber;
    int  _format;
}

@property (retain) NSCalendar *calendar;
@property struct CGSize { float x1; float x2; } canvasSize;
@property (nonatomic, readonly) float dateNameBaselineVerticalInset;
@property (copy) id /* block */ dateNameBlock;
@property (nonatomic, readonly) UIFont *dateNameFont;
@property int dateNameFormatType;
@property (nonatomic, readonly) float dateNameHorizontalInset;
@property (copy) NSString *dayNumber;
@property (nonatomic, readonly) float dayNumberBaselineVerticalInset;
@property (nonatomic, readonly) UIFont *dayNumberFont;
@property (nonatomic, readonly) float dayNumberTrackingValue;
@property int format;
@property (nonatomic, readonly) float minDateNameFontScale;
@property (nonatomic, readonly) float minDateNameLetterSpacing;
@property (nonatomic, readonly) float minFullDateNameFontScale;

+ (id)_dateNamesForCalendar:(id)arg1 type:(int)arg2;
+ (id)_dateNamesForDateFormatter:(id)arg1 type:(int)arg2;
+ (id)colorForDayOfWeek;
+ (id)countriesRequiringBlackDayOfWeek;
+ (BOOL)isBlackDayOfWeekRequiredForLocale:(id)arg1;

- (void).cxx_destruct;
- (void)_drawDateName;
- (void)_drawDayNumber;
- (void)_drawDayNumberForHomeScreenStyledIcon;
- (void)_drawDayNumberForNotificationIcon;
- (id)calendar;
- (struct CGSize { float x1; float x2; })canvasSize;
- (float)dateNameBaselineVerticalInset;
- (id /* block */)dateNameBlock;
- (id)dateNameFont;
- (int)dateNameFormatType;
- (float)dateNameHorizontalInset;
- (id)dayNumber;
- (float)dayNumberBaselineVerticalInset;
- (id)dayNumberFont;
- (float)dayNumberTrackingValue;
- (void)draw;
- (int)format;
- (id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateNameBlock:(id /* block */)arg3 dateNameFormatType:(int)arg4 canvasSize:(struct CGSize { float x1; float x2; })arg5 format:(int)arg6;
- (float)minDateNameFontScale;
- (float)minDateNameLetterSpacing;
- (float)minFullDateNameFontScale;
- (void)setCalendar:(id)arg1;
- (void)setCanvasSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDateNameBlock:(id /* block */)arg1;
- (void)setDateNameFormatType:(int)arg1;
- (void)setDayNumber:(id)arg1;
- (void)setFormat:(int)arg1;

@end
