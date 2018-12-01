using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace HelloMVC
{
    public class CompanyController : Controller
    {
        // GET: Company

            public ActionResult Index()
        {
            return View();
        }

        public ActionResult leadership()
        {
            return View();
        }

        public ActionResult services()
        {
            return View();
        }
        public string word()
        {
            return "this is company introduction";
        }

        public int add()
        {
            return 10;

        }
    }
}