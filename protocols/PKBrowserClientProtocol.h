/* Generated by RuntimeBrowser.
 */

@protocol PKBrowserClientProtocol <NSObject>

@required

- (void)btlePrinterFound:(PKPrinter *)arg1;
- (void)btleRssiUpdated:(NSUUID *)arg1 rssi:(NSNumber *)arg2;
- (void)printerAdded:(PKPrinter *)arg1 more:(BOOL)arg2;
- (void)printerRemoved:(PKPrinter *)arg1 more:(BOOL)arg2;

@end
