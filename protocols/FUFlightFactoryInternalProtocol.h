/* Generated by RuntimeBrowser.
 */

@protocol FUFlightFactoryInternalProtocol <FUFlightFactoryPrivateProtocol>

@required

+ (void)loadFlightDataWithFlightNumber:(void *)arg1 airlineCode:(void *)arg2 date:(void *)arg3 dateType:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: int, NSString *, NSDate *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

- (NSArray *)parseFlightData:(NSData *)arg1 withError:(id*)arg2;

@end
