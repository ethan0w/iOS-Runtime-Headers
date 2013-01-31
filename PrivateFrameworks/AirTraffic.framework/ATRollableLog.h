/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSDate, NSString, NSFileHandle;

@interface ATRollableLog : NSObject  {
    NSDate *_lastStatDate;
    NSString *_directory;
    NSString *_baseFilename;
    NSString *_generationalFilenameFormat;
    NSFileHandle *_fh;
    struct dispatch_source_s { } *_fdWatcher;
    struct dispatch_queue_s { } *_logQueue;
    struct dispatch_queue_s { } *_logRequestQueue;
}

@property(retain) NSDate * lastStatDate;
@property(retain) NSFileHandle * fh;

+ (id)allLogFilesForFilename:(id)arg1;
+ (void)enableLogRolling;
+ (id)_generationalFormatFromBase:(id)arg1;
+ (id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(int)arg3;
+ (id)loggerWithFilename:(id)arg1;

- (id)initWithFilename:(id)arg1;
- (void)logData:(id)arg1;
- (void)logString:(id)arg1;
- (id)lastStatDate;
- (id)fh;
- (void)slurpDataFromFile:(id)arg1;
- (void)_statFileIfNecessaryForRollingCheck;
- (void)_rollLogs;
- (id)compressFile:(id)arg1;
- (id)_fullCompressedFilePathWithGenerationNumber:(int)arg1;
- (void)_loadUpHandle;
- (void)setLastStatDate:(id)arg1;
- (void)setFh:(id)arg1;
- (id)_fullFilePathWithGenerationNumber:(int)arg1;
- (id)_filenameWithGenerationNumber:(int)arg1;

@end
