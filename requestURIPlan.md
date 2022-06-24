# How we're gonna block requests for now
### Concerns
Mostly, I'm doing it this way to avoid messing with the netwerk library.  I have yet to really figure out exactly how requests are handled -- function-by-function -- by the browser but I do know that the ```_loadURIWithFlags()``` function in the ```browser.js``` file gets called.  Further, changing the URI here changes the requested domain from the dns, but not affect how the urlbar appears (I think).  This means typing in ```www.abc123.dnk``` could be set to resolve to ```www.xyz.com``` but the urlbar will still read ```www.abc123.dnk```.

### Drawbacks
There exists a pretty obvious drawback: It depends on standard DNS.  This means that the url could be accessed by someone who knows the proper dns lookup value.  People who know this could then create sites that redirect with more simple domain names.  For example, if the website ```www.abc123.dnk``` is mapped to the url ```www.x2uy37d77u29hh8398872hsggt368d789d77d900loksokjyttdyhh2443gx5162536.com``` people could first, type in this to the urlbar from any browser and alternatively, keeners with a few dollars a month to spare on a domain could register the domain ```www.dankredirect.com``` to redirect to the site at the above mess of characters.  There really isn't any workaround for this as far as I can tell except registering and managing our own DNS-type thing that returns the correct ip like usual.  This will require modifying the netwerk module and for now I am going to avoid the hell out of that...

### Process
As mentioned above, we're avoiding netwerk.  I'll hopefully get a more experienced network developer to set this stuff up in the future but I want a working prototype first.  I may end up doing it myself, but my network understanding is limited, and to be frank, I'm not an amazing C++ developer.  Javascript will just have to suffice for now.

1. Do a toplevel pre-process: If the requested site is .dnk, we'll need to get a remapped url to lookup with DNS, otherwise, continue as normal.
2. Verify the domain: do a lookup (possible done as part of part 1), to see if the domain, regardless of the tld, is an approved site.
   * if that site is not verified, redirect to a site that says its not part of the dankweb.
   * this can be done by just replacing the string to be something like ```about:blocked```
3. Finally, do the DNS request.

### Final remarks
Again, I'd much prefer to see this done in a much more controlled manner.  This will involve registering and hosting our own dns and lookup system privately that only can be accessed by the DNE.  Since this code is open source, we might see similar projects popping up, and maybe we'll grant access to those browsers as well.  But for now our planned DNS doesn't exist and is privately closed.

If you're reading this and you're pretty experienced with networking/network programming, please fork and do what I am incapable of.