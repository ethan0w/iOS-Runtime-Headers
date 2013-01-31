/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString;

@interface AXFileLogger : NSObject  {
    NSString *_filePath;
}

@property(copy) NSString * filePath;

+ (id)defaultFileLogger;

- (void)dealloc;
- (id)initWithFilePath:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)log:(id)arg1;

@end
