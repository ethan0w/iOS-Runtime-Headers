/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString, PKPrintSettings, NSDate, NSData;

@interface PKJob : NSObject  {
    int number;
    int mediaProgress;
    int mediaSheets;
    int mediaSheetsCompleted;
    NSString *printerDisplayName;
    int printerKind;
    NSString *printerLocation;
    PKPrintSettings *settings;
    int state;
    NSDate *timeAtCompleted;
    NSDate *timeAtCreation;
    NSDate *timeAtProcessing;
    NSData *thumbnailImage;
}

@property int number;
@property int mediaProgress;
@property int mediaSheets;
@property int mediaSheetsCompleted;
@property(retain) NSString * printerDisplayName;
@property int printerKind;
@property(retain) NSString * printerLocation;
@property(retain) PKPrintSettings * settings;
@property int state;
@property(retain) NSDate * timeAtCompleted;
@property(retain) NSDate * timeAtCreation;
@property(retain) NSDate * timeAtProcessing;
@property(retain) NSData * thumbnailImage;

+ (id)currentJob;
+ (id)jobs;

- (int)state;
- (int)cancel;
- (int)mediaProgress;
- (void)setTimeAtProcessing:(id)arg1;
- (void)setTimeAtCreation:(id)arg1;
- (void)setTimeAtCompleted:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setPrinterLocation:(id)arg1;
- (void)setPrinterKind:(int)arg1;
- (void)setPrinterDisplayName:(id)arg1;
- (void)setMediaSheetsCompleted:(int)arg1;
- (void)setMediaSheets:(int)arg1;
- (void)setMediaProgress:(int)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setNumber:(int)arg1;
- (id)thumbnailImage;
- (int)number;
- (int)mediaSheetsCompleted;
- (int)mediaSheets;
- (id)timeAtCompleted;
- (id)timeAtProcessing;
- (id)timeAtCreation;
- (int)printerKind;
- (id)printerLocation;
- (id)printerDisplayName;
- (id)settings;
- (int)update;
- (void)setState:(int)arg1;
- (BOOL)isEqual:(id)arg1;

@end
